https://www.codechef.com/LTIME70B/problems/SEVENSEG/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:30/03/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    int seg[10]={6,2,5,5,4,5,6,3,7,6};
    long long t=1;
    scanf("%lld",&t);
    while(t--)
    {
       int n;
       scanf("%d",&n);
       int x[n],y[n],f=0;
       int min=0,max=0;
       for(int i=0;i<n;i++)
       {
           scanf("%d%d",&x[i],&y[i]);
           if(y[i]>seg[x[i]])
            {
                f=1;
                break;
            }
            min=seg[x[i]]-y[i];
           max=7-y[i];
       }
       if(f==1)
        printf("invalid\n");
        else
       printf("%d %d\n",min,max);
    }
    
    return 0;
}
