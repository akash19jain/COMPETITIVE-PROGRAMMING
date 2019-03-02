https://www.codechef.com/CIU2018/problems/C002/

/* package codechef; // don't place package name! */

import java.util.Scanner;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Main
{
	public static void main (String[] args) throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		Scanner sc=new Scanner(System.in);
		
		int t;
		t=Integer.parseInt(br.readLine());
		
		while(t>0)
		{
		    int n;
		    n=Integer.parseInt(br.readLine());
		    int z=0,j=0;
		    String str[]=new String[n];
		    String q=br.readLine();
		    int q1=q.length();
		    for(int i=0;i<q1 && q.charAt(i)!=' ';i=j+1)
		    {
		        String s="";
		        for(j=i;j<q1 && q.charAt(j)!=' ';j++)
		        s=s+q.charAt(j);
		        
		        str[z]=s;
		        z++;
		        
		    }
		    
		    String str1="";
		    str1=br.readLine();
		    int l=str1.length();
		    String str2="";
		    String str3="";
		    int count=0;
		    for(int i=0;i<l;i++)
		    {
		        str2=str2+str1.charAt(i);
		        for(j=0;j<n;j++)
		        {
		            count=0;   
		            if(str2.equals(str[j]))
		            {
		                str3=str3+str2+" "; 
		                str2="";
		                count =1;
		                break; 
		                
		            }
		            
		        }
		    }
		    if(count==1)
		    System.out.println(str3);
		    else
		    System.out.println("WRONG PASSWORD");
		    t--;
		    
		    
		}
	}
}
