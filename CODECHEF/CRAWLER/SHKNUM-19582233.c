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
/*1
2
4
8
16
32
64
128
256
512
1024
2048
4096
8192
16384
32768
65536
131072
262144
524288
1048576
2097152
4194304
8388608
16777216
33554432
67108864
134217728
268435456
536870912
1073741824*/