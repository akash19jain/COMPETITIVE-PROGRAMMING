class Solution {
public:
    int countElements(vector<int>& arr) 
    {
        int n=arr.size();
        int count[1005];
        memset(count,0,sizeof(count));
        
        for(int i=0;i<n;i++)
        {
            count[arr[i]]++;
        }
        int ans=0;
        for(int i=0;i<=1000;i++)
        {
            if(count[i+1])
                ans+=count[i];
        }
        return ans;
    }
};