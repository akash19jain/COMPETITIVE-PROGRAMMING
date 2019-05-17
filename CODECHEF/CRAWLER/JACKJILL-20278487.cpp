// O(n) solution for finding maximum sum of
// a subarray of size k
#include <iostream>
using namespace std;
 
// Returns maximum sum in a subarray of size k.
long long maxSum(long long arr[], long long n, long long k)
{
    // k must be greater
    if (n < k)
    {
       cout << "Invalid";
       return -1;
    }
 
    // Compute sum of first window of size k
    long long res = 0;
    for (long long i=0; i<k; i++)
       res += arr[i];
 
    // Compute sums of remaining windows by
    // removing first element of previous
    // window and adding last element of 
    // current window.
    long long curr_sum = res;
    for (long long i=k; i<n; i++)
    {
       curr_sum += arr[i] - arr[i-k];
       res = max(res, curr_sum);
    }
 
    return res;
}
 
// Driver code
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n,k,d;
        scanf("%lld%lld%lld",&n,&k,&d);
        long long arr[n];
        long long arr1[n];
        
        for(long long i=0;i<n;i++)
            scanf("%lld",&arr[i]);
            
        for(long long i=0;i<n;i++)
        {
            scanf("%lld",&arr1[i]);
            arr1[i]+=arr[i];
        }
        long long ans= maxSum(arr1, n, k);
        if(ans<d)
        cout << "yes\n";
        else
        cout << "no\n";
    }
    return 0;
}