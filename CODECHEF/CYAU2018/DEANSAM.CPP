https://www.codechef.com/CYAU2018/problems/DEANSAM/

// C++ implementation to find the smallest sum
// contiguous subarray
#include <bits/stdc++.h>
 
using namespace std;
 
// function to find the smallest sum contiguous subarray
int smallestSumSubarr(long long arr[], long long n)
{
    // to store the minimum value that is ending
    // up to the current index
    long long min_ending_here = 1000000005;
     
    // to store the minimum value encountered so far
    long long min_so_far = 1000000005;
     
    // traverse the array elements
    for (long long i=0; i<n; i++)
    {
        // if min_ending_here > 0, then it could not possibly
        // contribute to the minimum sum further
        if (min_ending_here > 0)
            min_ending_here = arr[i];
         
        // else add the value arr[i] to min_ending_here    
        else
            min_ending_here += arr[i];
         
        // update min_so_far
        min_so_far = min(min_so_far, min_ending_here);            
    }
     
    // required smallest sum contiguous subarray value
    return min_so_far;
}
 
 
// Driver program to test above
int main()
{
    long long n;
    scanf("%lld",&n);
    long long arr[n];
    for(long long i=0;i<n;i++)
    scanf("%lld",&arr[i]);
    cout<< smallestSumSubarr(arr, n);
    return 0;     
} 
