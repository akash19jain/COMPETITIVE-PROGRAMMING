/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:21/05/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define MOD 1000000007
int main()
{
    long long t=1;
    //scanf("%lld",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        double a[n],ans=0;
        for(int i=0;i<n;i++)
        {
            scanf("%lf",&a[i]);
            ans+=a[i];
            double x=(double)1.0/a[i];
            //printf("%lf\n",x);
            ans+=x;
            //ans+=(double)(1.0/a[i]);
        }
        printf("%.12lf",ans);
    }
    return 0;
}
