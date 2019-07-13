*   USERNAME:akash19jain    
*   DATE:13/07/2019 
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define MOD 1000000007
int cmp(const void * a,const void * b);
long long min(long long a,long long b)
{
    if(a<b)
        return a;
    return b;
}
long long calculate(long long n)
{
    if(n==1)
        return 0;
    else if(n%2==0)
        return 1+calculate(n/2);
    else
        return 1+min(calculate(n-1),calculate(n+1));
}
int main()
{
    
    long long t=1,i=0;
    scanf("%lld",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        long long ans=calculate(n);
        printf("%lld\n",ans);
        
    }
    return 0;
}


//qsort(arr,n,sizeof(arr[0]),cmp);
int cmp(const void * a,const void * b)
{
    return (*(int*)a - *(int*)b);
}
