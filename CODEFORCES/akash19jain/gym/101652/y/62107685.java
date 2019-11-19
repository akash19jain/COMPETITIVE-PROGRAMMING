import java.io.*;
import java.util.*;
import java.text.DecimalFormat;

public class Y {
	public static void main(String args[])throws IOException {
		IO io = new IO();
		StringBuilder out = new StringBuilder("");

		double k=io.nd(), p=io.nd(), x=io.nd();
        String res = solve(k,p,x);
		System.out.print(res);
	}

    static String solve(double k, double p, double x) {
        double n = 1, days;
        double min = Double.MAX_VALUE;
        for(int i=1;i<=10000;i++) {
            days = k / n;
            min = Math.min(x*n + days*p, min);
            n++;
        }
        DecimalFormat f = new DecimalFormat("##.000");
        return ""+f.format(min);      
    }
}
	
class Meth {

	static long P = (long)1e9 + 7;

	// MATRIX ----------------------------------
	
	// a*r^0 + a*r^1 + ... a*r^n
	static long gp_sum(long a, long r, long n) {
	    long[][] x = { {a, a}};
	    long[][] m = {
	       {a, 0},
	       {r, r}
	    };
	    
	    long[][] m_pow = matrix_pow(m, n);
	    long[][] res = matrix_mul(x, m_pow);

	    return res[0][0];
	}
	
	static long[][] matrix_pow(long[][] a, long pow) {
    
        long[][] res = new long[a[0].length][a[0].length];
        for(int i=0;i<a.length;i++) res[i][i] = 1;
        
	    while( pow>0 ) {
	        if( (pow&1)==1 )
	            res = matrix_mul(res, a);
	        a = matrix_mul(a, a);
	        pow /= 2;
	    }
	    
	    return res;
	}
	
	static long[][] matrix_mul(long[][] a, long[][] b) {
	    if(a[0].length != b.length)
	        return null;
	        
	    long[][] res = new long[a.length][b[0].length];
	    
	    for(int i=0;i<a.length;i++) 
	        for(int j=0;j<b.length;j++) 
	            for(int k=0;k<b.length;k++) 
	                res[i][j] = modAdd( res[i][j], modProduct( a[i][k], b[k][j] ) );
	    return res;
	}

	// PRIME ----------------------------------
	
	static long nextPrime(long n) {
	    if(n==2) n++;
	    else n+=2;
	    while(!isPrime(n)) n+=2;
	    return n;
	}
	
    static long spf(long n) {
	    if( (n&1L)==0 ) return 2;
	    long limit = (long)Math.sqrt(n);
	    for(long i=3;i<=limit;i+=2) if(n%i==0) return i;
	    return n;
	}
	
	static boolean isPrime(long n) {
	    if(n==2) return true;
	    if(n%2==0 || n==1) return false;
	    long limit = (long)Math.sqrt(n);
	    for(long i=3;i<=limit;i+=2) if(n%i==0) return false;
	    return true;
	}
	
	static long gcd(long a, long b) 
    { 
        if (a == 0) return b; 
        return gcd(b%a, a); 
    } 
    
    // OPERATIONS ----------------------------------

	static long modPow1(long x, long y) 
	{ 
			long res = 1;      
			x = x % P;  
			while (y > 0) 
			{ 
					if((y & 1)==1) 
							res = (res * x) % P; 
					y = y >> 1;  
					x = (x * x) % P;  
			} 
			return res; 
	} 

	// -------------------------------------
	static long modPow2(long x, long y) 
	{ 
			long res = 1;      
			x = x % P;  
			while (y > 0) 
			{ 
					if((y & 1)==1) 
							res = multiplication(res, x);
					y = y >> 1;  
					x = multiplication(x, x);
			} 
			return res; 
	}
	static long multiplication(long a, long b) {
			long result = 0;
			a = a % P;
			while (b > 0) {
					if((b & 1) == 1) {
							result = (result + a) % P;
					}
					a = (a << 1) % P;
					b >>= 1;
			}
			return result;
	} 
	//------------------------------------------

	// when p is Prime
	static long mmi1(long n) {
		return modPow1(n, P-2);
	}

	// when n and p are co-primes: mmi2(n)
	static long mmi2(long a, long m) 
    { 
        long m0 = m; 
        long y = 0, x = 1; 
        if (m == 1) return 0; 
		
		long q, t;
        while (a > 1) { 
            q = a / m; 
            t = m; 
            m = a % m; 
            a = t; 
            t = y; 
            y = x - q * y; 
            x = t; 
        } 
        if (x < 0) x += m0; 
        
        return x; 
    } 

	static long modDivide(long a, long b) { 
		a = a % P;
		long inv;

		// if P is prime
		inv = mmi1(b);

		// else if b, P are co-prime
		// inv = mmi2(b, P);
		
		if(inv == -1) return -1; 
		else return modProduct(a, inv);
	} 

	static long modProduct(long... a) {
		long sum = 1;
		for(long x : a) 
			sum = ( (sum%P) * (x%P) )%P;
		
		return sum;
	}


	static long modAdd(long... a) {
		long sum = 0;
		for(long x : a) {
			if(x>0)
				sum = ( (sum%P) + (x%P) )%P;
			else
				sum = ( (sum%P) +(x%P) + P)%P;
		}
		
		return sum;
	}

	static int min(int a, int b) { return a<b ? a : b; }
	static long min(long a, long b) { return a<b ? a : b; }
	static double min(double a, double b) { return a<b ? a : b; }

	static int max(int a, int b) { return a>b ? a : b; }
	static long max(long a, long b) { return a>b ? a : b; }
	static double max(double a, double b) { return a>b ? a : b; }

	static int abs(int a) { return a<0 ? -a : a; }
	static double abs(double a) { return a<0 ? -a : a; }
	
	static int getMid(int a, int b) { return a + (b-a)/2; }
	static double getMid(double a, double b) { return a + (b-a)/2.0; }
}

class IO {
	private BufferedReader br;
	private StringTokenizer st;

	String n()throws IOException {
    if(br == null) 
      br = new BufferedReader(new InputStreamReader(System.in));
    if(st == null || !st.hasMoreTokens())
      st = new StringTokenizer(br.readLine());
		return st.nextToken();
	}

	int ni()throws IOException { return Integer.parseInt(n()); }
	double nd()throws IOException { return Double.parseDouble(n()); }
	long nl()throws IOException { return Long.parseLong(n()); }

	int[] nia(int n)throws IOException { 
		int[] a = new int[n];
		for(int i=0;i<n;i++) a[i] = ni();
		return a;
	}

	long[] nla(int n)throws IOException {
		long[] a = new long[n];
		for(int i=0;i<n;i++) a[i] = nl();
		return a;
	}

	double[] nda(int n)throws IOException {
		double[] a = new double[n];
		for(int i=0;i<n;i++) a[i] = nd();
		return a;
	}

	String[] nsa(int n)throws IOException {
    String[] arr = new String[n];
    for(int i=0;i<n;i++)
      arr[i] = n();
    
    return arr;
  }
}
