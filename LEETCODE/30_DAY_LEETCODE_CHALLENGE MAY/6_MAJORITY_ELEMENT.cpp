class Solution {
public:
	int majorityElement(vector<int>& nums)
	{
		int n = nums.size();
		sort(nums.begin(), nums.end());

		int m = n / 2;
		int i = 0;
		while (m < n)
		{
			if (nums[i] == nums[m])
				return nums[i];
			i++;
			m++;
		}
		return -1;
	}
};