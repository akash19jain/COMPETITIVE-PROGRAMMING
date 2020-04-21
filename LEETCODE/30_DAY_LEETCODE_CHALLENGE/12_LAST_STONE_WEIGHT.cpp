class Solution {
public:
    int lastStoneWeight(vector<int>& stones) 
    {
        int n=stones.size();
        priority_queue<int> pq;
        for(int i=0;i<n;i++)
        {
            pq.push(stones[i]);
        }
        while(pq.size()>1)
        {
            int y=pq.top();
            pq.pop();
            int x=pq.top();
            pq.pop();
            if(x==y)
                continue;
            else
            {
                y=y-x;
                pq.push(y);
            }
        }
        int ans=pq.top();
        if(pq.empty())
            ans=0;
        return ans;
    }
};