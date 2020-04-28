class Solution {
public:
	bool canJump(vector<int>& nums)
	{
		int i = 0, j = 0;
		int n = nums.size();
		for (; i < n && i <= j; i++ )
			j = max(nums[i] + i, j);

		return i == n;
	}
};