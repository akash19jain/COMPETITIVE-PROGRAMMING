//https://leetcode.com/problems/min-cost-climbing-stairs

int min(int a,int b)
{
    if(a<b)
        return a;
    return b;
}

int minCostClimbingStairs(int* cost, int n)
{
    for(int i=2;i<n;i++)
    {
        cost[i]=cost[i]+min(cost[i-2],cost[i-1]);
    }
    return min(cost[n-2],cost[n-1]);
}

