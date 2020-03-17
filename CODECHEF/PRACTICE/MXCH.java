/*  AUTHOR: AKASH JAIN
*   EMAIL:  akash19jain@gmail.com
*   ID:     akash19jain  
*   DATE:   06-03-2020 19:08:18
*/


import java.io.*;
 
public class Main
{
	public static void main(String args[])throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		int t;
		t=Integer.parseInt(br.readLine());
		for(int ii=0;ii<t;ii++)
		{
    		int n,k;
    		String raw[]=br.readLine().split(" ");
    		n=Integer.parseInt(raw[0]);
    		k=Integer.parseInt(raw[1]);
    		for(int i=0;i<=k;i++)
    			System.out.print(n-k+i+" ");
    		for(int i=0;i<n-k-1;i++)
    			System.out.print(i+1+" ");
    		System.out.println("");
		}

	}
}