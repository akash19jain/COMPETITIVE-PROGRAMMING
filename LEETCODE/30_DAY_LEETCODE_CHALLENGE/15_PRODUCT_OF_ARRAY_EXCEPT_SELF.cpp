class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n=nums.size();
        int ans=1;
        vector<int> final(n);
        
        vector<int> begin(n),end(n);
        
        begin[0]=1;
        end[0]=1;
        
        for(int i=1;i<n;i++)
        {
            begin[i]=begin[i-1]*nums[i-1];
            end[i]=end[i-1]*nums[n-i];
        }
        
        for(int i=0;i<n;i++)
            final[i]=begin[i]*end[n-i-1];
        return final;
    }
};