class Solution {
public:
	vector<int> findDuplicates(vector<int>& nums)
	{
		int n = nums.size();
		sort(nums.begin(), nums.end());
		vector<int> ans;
		for (int i = 0; i < n - 1; i++)
		{
			if (nums[i] == nums[i + 1])
			{
				ans.push_back(nums[i]);
				i++;
			}
			else
			{

			}
		}

		return ans;
	}
};