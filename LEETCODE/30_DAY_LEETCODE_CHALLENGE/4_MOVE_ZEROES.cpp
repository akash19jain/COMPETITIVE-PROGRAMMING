class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int n=nums.size();
        int count=0;
        int front=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
                count++;
            else
            {
                nums[front]=nums[i];
                front++;
            }
        }
        for(int i=front;i<n;i++)
            nums[i]=0;
    }
};