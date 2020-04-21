long long max(long long a,long long b)
{
    if(a>b)
        return a;
    return b;
}

int maxSubArray(int* nums, int numsSize){
    int i,n=numsSize;
    long long dp[n+1],ans=-1000000000000;
    memset(dp,0,sizeof(dp));
    for(i=0;i<n;i++)
    {
        dp[i+1]=max(nums[i],nums[i]+dp[i]);
        //printf("%lld\n",dp[i+1]);
        ans=max(ans,dp[i+1]);
    }
    return ans;
}

