class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int n=nums.size();
        int l=0,h=n-1;

        while(l<h)
        {
        	int m=(l+h)/2;
        	if(nums[m]>nums[h])
        		l=m+1;
        	else
        		h=m;
        }

        int rot=l;
        l=0,h=n-1;

        while(l<=h)
        {
        	int m=(l+h)/2;
        	int m1=(m+rot)%n;
        	if(nums[m1]==target)
        		return m1;
        	else if(nums[m1]<target)
        		l=m+1;
        	else
        		h=m-1;
        }
        return -1;
    }
};