https://www.codechef.com/JAN19B/problems/MGAME/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:11/01/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long n,p,i,j,k,max=0,c=0,ans=0;
        scanf("%lld%lld",&n,&p);
        if(n==p)
        {
            if(n==1)
            c=1;
            else if(n==2)
            c=8;
            else if(n==3)
            c=4;
            else
            {
                long long x=n/2;
                x++;
                c=x*x;
            }
            printf("%lld\n",c);
            continue;
        }
        else if(n==1 || n==2)
        {
            c=p*p*p;
            printf("%lld\n",c);
            continue;
        }
        else if(n==3)
        {
            p=p-2;
            c=(3*p*p)+1;
            printf("%lld\n",c);
            continue;
        }
        else if(p-n==1)
        {
            if(n%2==1)
            n--;
            
            long long x=(n/2)+3;
            x=x*x;
            c=x-((n/2)+2);
            
            printf("%lld\n",c);
            continue;
        }
        else if(p-n==2)
        {
            long long x=(n/2)+4;
            x=x*x;
            c=x+3;
            printf("%lld\n",c);
            continue;
        }
        else if(p-n==3)
        {
            long long x=(n/2)+6;
            x=x*x;
            c=x-(n/2)+1;
            printf("%lld\n",c);
            continue;
        }
        else if(p-n==4)
        {
            long long x=(n/2)+7;
            x=x*x;
            c=x+12;
            printf("%lld\n",c);
            continue;
        }
        else if(p-n==5)
        {
            if(n%2==1)
            n--;
            long long a=25+(n/2);
            if(n>3)
            a=a+2;
            long long x=(n/2)+8;
            x=x*x;
            c=x+a;
            printf("%lld\n",c);
            continue;
        }
        else
        {
        }
        int z=1;
        i=(n/2)+1;
        c=p-n+1;
        j=(n%i)+1;
        ans=pow((p-j),2);
        ans+=n/2;
        ans+=(p-j+c)*c;
        printf("%lld\n",ans);
        
        
        
    }
}
