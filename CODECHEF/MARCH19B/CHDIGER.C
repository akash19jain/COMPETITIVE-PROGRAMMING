https://www.codechef.com/MARCH19B/problems/CHDIGER/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:02/03/2019 
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
        long long d;
        char n[20],ans[20];
        scanf("%s%lld", n,&d);
       // printf("%s\n%lld\n",n,d);
        int l=strlen(n);
        int min=10,p=0,a=0,x=48;
        for(int i=0;i<l;i++)
        {
            min=n[i];
            //printf("MIN=%d ",min);
            p=i;
            for(int j=i;j<l;j++)
            {
                if((n[j]<(min+x)) && (n[j]<(d+x)))
                {
                    min=n[j]-x;
                    p=j;
                }
            }
            if(n[i]!=min)
            {
                //printf("%d",min);
                ans[a++]=min+x;
                i=p;
            }
            
        }
        while(a<l)
        {
           // printf("%d",d);
            ans[a++]=d+x;
        }
        ans[l]='\0';
        //printf("\n");
        printf("%s\n",ans);
    }
        
    return 0;
}
