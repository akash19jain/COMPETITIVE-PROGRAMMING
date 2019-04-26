https://www.codechef.com/DEMA2019/problems/MAXSCRAB/


/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:26/04/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    long long t1=1;
    scanf("%lld\n",&t1);
    while(t1--)
    {
        long long n;
        scanf("%lld\n",&n);
        //printf("N=%lld\n",n);
        char str[n+5];
        scanf("%s", str);
        long long points[8];
        for(long long i=0;i<8;i++)
            scanf("%lld",&points[i]);
        long long max=-1,cur=0,d=0,t=0;
        for(long long i=0;i<=n-8;i++)
        {
            //printf("i=%lld ",i);
            cur=0,d=0,t=0;
            for(long long j=0;j<8;j++)
            {
                long long x=i+j;
                if(str[x]=='.')
                    cur+=points[j];
                else if(str[x]=='d')
                    cur+=points[j]*2;
                else if(str[x]=='t')
                    cur+=points[j]*3;
                else if(str[x]=='D')
                {
                    d++;
                    cur+=points[j];
                }
                else if(str[x]=='T')
                {
                    t++;
                    cur+=points[j];
                }
            }
            while(t--)
            {
                cur=cur*3;
            }
            while(d--)
            {
                cur=cur*2;
            }
            
            if(cur>max)
            {
                max=cur;
                //printf("%lld %lld\n",i,max);
            }
        }
        printf("%lld\n",max);
    }
    return 0;
}
