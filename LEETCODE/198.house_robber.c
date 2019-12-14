//https://leetcode.com/problems/house-robber/submissions/
long long max(long long a,long long b)
{
    if(a>b)
        return a;
    return b;
}
int rob(int* nums, int numsSize){
    int n=numsSize,i;
    long long dp[n+3];
    memset(dp,0,sizeof(dp));
    for(i=0;i<n;i++)
    {
        dp[i+2]=dp[i+1];
        dp[i+2]=max(dp[i+1],dp[i]+nums[i]);
    }
    return dp[n+1];

}

