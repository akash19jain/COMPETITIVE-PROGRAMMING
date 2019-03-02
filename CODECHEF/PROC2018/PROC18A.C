https://www.codechef.com/PROC2018/problems/PROC18A/

#include<stdio.h>

int maxSum(int arr[], int n, int k)
{
    // k must be greater
    if (n < k)
    {
       //cout << "Invalid";
       return -1;
    }
 
    // Compute sum of first window of size k
    int res = 0;
    for (int i=0; i<k; i++)
       res += arr[i];
 
    // Compute sums of remaining windows by
    // removing first element of previous
    // window and adding last element of 
    // current window.
    int curr_sum = res;
    for (int i=k; i<n; i++)
    {
       curr_sum += arr[i] - arr[i-k];
       if(res>curr_sum)
       res=res;
       if(res<=curr_sum)
       res=curr_sum;
    }
 
    return res;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        int arr[n];
        for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
        
        int max=maxSum(arr, n, k);
        printf("%d\n",max);
        
    }
}
