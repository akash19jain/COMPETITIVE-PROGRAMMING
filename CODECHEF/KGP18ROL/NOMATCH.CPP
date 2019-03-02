https://www.codechef.com/KGP18ROL/problems/NOMATCH/

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include <bits/stdc++.h> 
using namespace std;
int main()
{
    long long t;
    scanf("%lld",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        long long arr[n];
        for(long long i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
        }
        sort(arr, arr + n); 
        long long sum=0;
        for(long long i=0;i<n/2;i++)
        {
            sum -= (arr[i]); 
            sum += (arr[n - i - 1]);
        }
        
        printf("%lld\n",sum);
    }

    return 0;
}
