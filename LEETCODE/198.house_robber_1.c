//https://leetcode.com/problems/house-robber/
long long max(long long a,long long b)
{
    if(a>b)
        return a;
    return b;
}
int rob(int* nums, int numsSize){
    int n=numsSize,i;
    long long ppmax=0,pmax=0,cmax=0;
    for(int i=0;i<n;i++)
    {
        cmax=pmax;
        cmax=max(cmax,nums[i]+ppmax);
        ppmax=pmax;
        pmax=cmax;
    }
    return cmax;
}

