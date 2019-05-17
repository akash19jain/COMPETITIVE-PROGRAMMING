// C++ program to find minimum difference between
// any pair in an unsorted array
#include <bits/stdc++.h>
using namespace std;
 
// Returns minimum difference between any pair
int findMinDiff(long long arr[], long long n)
{
   // Sort array in non-decreasing order
   sort(arr, arr+n);
 
   // Initialize difference as infinite
   int diff = 1000001;
 
   // Find the min diff by comparing adjacent
   // pairs in sorted array
   for (long long i=0; i<n-1; i++)
      if (arr[i+1] - arr[i] < diff)
          diff = arr[i+1] - arr[i];
 
   // Return min diff
   return diff;
}
 
// Driver code
int main()
{
   int t;
    scanf("%d",&t);
    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        long long arr[n];
        for(long long i=0;i<n;i++)
        scanf("%lld",&arr[i]);
   cout <<findMinDiff(arr, n);
   cout <<"\n";
    }
   return 0;
}