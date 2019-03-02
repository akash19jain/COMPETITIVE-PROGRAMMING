https://www.codechef.com/COOK101B/problems/CAMPON/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE;18/12/2018    
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long d;
        scanf("%lld",&d);
        int d1[32]={0},x,y,sum=0;
        int d2[32]={0};
        for(int i=0;i<d;i++)
        {
            scanf("%d%d",&y,&x);
            d1[y]=x;
        }
        for(int i=1;i<=31;i++)
        {
            sum+=d1[i];
            d2[i]=sum;
            //printf("%d ",sum);
            
        }
        long long q;
        scanf("%lld",&q);
        for(int i=0;i<q;i++)
        {
            scanf("%d%d",&y,&x);
            if(d2[y]>=x)
            {
                 printf("Go Camp\n");
            }
            else
            {
                 printf("Go Sleep\n");
            }
        }
        
    }
    
    
    return 0;
}
