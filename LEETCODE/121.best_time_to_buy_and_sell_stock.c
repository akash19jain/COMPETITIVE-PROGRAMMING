//https://leetcode.com/problems/best-time-to-buy-and-sell-stock

int max(int a,int b)
{
    if(a>b)
        return a;
    return b;
    
}
int min(int a,int b)
{
    if(a<b)
        return a;
    return b;
    
}

int maxProfit(int* prices, int n){
    int maxp=0,minp=10000000000;
    for(int i=0;i<n;i++)
    {
        minp=min(minp,prices[i]);
        maxp=max(maxp,prices[i]-minp);
    }
    return maxp;
}



