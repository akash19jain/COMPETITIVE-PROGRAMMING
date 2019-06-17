https://www.codechef.com/MAY19B/problems/WTBTR/

/*  AUTHOR:AKASH JAIN
*   USERNAME:akash19jain    
*   DATE:11/05/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define mod 1000000007
int cmp (const void * a, const void * b)
{
    if( *(double*)a - *(double*)b < 0 )
        return -1;
    if( *(double*)a - *(double*)b > 0 )
        return 1;
    return 0;
}
int main()
{
    
    long long t=1;
    scanf("%lld",&t);
    while(t--)
    {
       long long n;
       scanf("%lld",&n);
       double x[n],y[n];
       for(long long i=0;i<n;i++)
       {
           scanf("%lf%lf",&x[i],&y[i]);
       }
       double a[n],b[n];
       for(long long i=0;i<n;i++)
       {
           a[i]=x[i]+y[i];
           b[i]=x[i]-y[i];
           //printf("%lf %lf\n",a[i],b[i]);
       }
       qsort(a,n,sizeof(a[0]),cmp);
       qsort(b,n,sizeof(b[0]),cmp);
       /*for(long long i=0;i<n;i++)
       {
           printf("%lf %lf\n",a[i],b[i]);
       }*/
       double min;
       double min1;
       min=((a[1]-a[0])/2.0);
        //printf("%lf\n",min);  
        
       double min2=((b[1]-b[0])/2.0);
       
      
       if(min>min2)
            min=min2;
       
       //printf("%lf\n",min);
        
        for(long long i=1;i<n-1;i++)
        {
            min1=((a[i+1]-a[i])/2.0);
    
            if(min1<min)
                min=min1;
            
            min2=((b[i+1]-b[i])/2.0);
            if(min2<min)
                min=min2;
                
        }
        printf("%.10lf\n",min);
    }
    return 0;
}
