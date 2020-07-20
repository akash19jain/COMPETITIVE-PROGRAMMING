class Solution {
public:
	void sortColors(vector<int>& nums)
	{
		int c0 = 0, c1 = 0, c2 = 0;
		int n = nums.size();
		for (int i = 0; i < n; i++)
		{
			if (nums[i] == 0)
				c0++;
			else if (nums[i] == 1)
				c1++;
			else
				c2++;
		}
		int i = 0;
		for (i = 0; i < c0; i++)
			nums[i] = 0;
		for (; i < c0 + c1; i++)
			nums[i] = 1;
		for (; i < c0 + c1 + c2; i++)
			nums[i] = 2;
	}
};