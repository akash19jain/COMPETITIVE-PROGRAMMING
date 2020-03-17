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
		for(int i=0;i<t;i++)
		{
    		int a,b,c,d;
    		String raw[]=br.readLine().split(" ");
    		a=Integer.parseInt(raw[0]);
    		b=Integer.parseInt(raw[1]);
    		c=Integer.parseInt(raw[2]);
    		d=Integer.parseInt(raw[3]);
    
    		if(a==b)
    			System.out.println("YES");
    		else if(c-d==0)
    			System.out.println("NO");
    		else
    		{
    			if((a-b)%(c-d)==0)
    				System.out.println("YES");
    			else
    				System.out.println("NO");
    		}
		}

	}
}