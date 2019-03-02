https://www.codechef.com/AUG18B/problems/SHKNUM/

#include<stdio.h>
#include<math.h>
int main()
{
    long int t;
    scanf("%ld",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        long long arr[31];
        for(int i=0;i<=30;i++)
        arr[i]=pow(2,i);
        
        long long d=n*n+100;
        for(int i=0;i<30;i++)
        {
            for(int j=i+1;j<=30;j++)
            {
                long long sum=arr[i]+arr[j];
                long long d1=abs(n-sum);
                if(d1<d)
                d=d1;
            }
        }
        printf("%lld\n",d);
        
    }
}
