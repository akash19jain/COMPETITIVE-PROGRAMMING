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
        double a[n],b[n],sa=0,sb=0;
        for(int i=0;i<n;i++)
        {
            scanf("%lf",&a[i]);
            sa+=a[i];
        }
        for(int i=0;i<n;i++)
        {
            scanf("%lf",&b[i]);
            sb+=b[i];
        }
       // printf("%f %f",sa,sb);
       double error=(double)n/(200000.0);
        //printf("%lf\n",(sb-sa));
        double x=sa-sb;
        if(sa<sb)
        {
                x=sb-sa;
        }
        if((x)<error)
            printf("SUM(A)=SUM(B)");
        else if (sa>sb+error)
        {
            printf("SUM(A)>SUM(B)");
        }
        else
        {
            printf("SUM(A)<SUM(B)");
        }
        
    }
    return 0;
}
