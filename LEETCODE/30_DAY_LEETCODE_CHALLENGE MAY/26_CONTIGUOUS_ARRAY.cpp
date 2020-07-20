class Solution {
public:
	int findMaxLength(vector<int>& nums)
	{
		int n = nums.size();
		int sum = 0, maxa = 0;
		int arr[2 * n + 1];
		for (int i = 0; i <= 2 * n; i++)
			arr[i] = -2;
		arr[n] = -1;
		for (int i = 0; i < n; i++)
		{
			if (nums[i] == 0)
				sum -= 1;
			else
				sum += 1;
			if (arr[sum + n] >= -1)
			{
				maxa = max(maxa, i - arr[sum + n]);
			}
			else
				arr[sum + n] = i;

		}
		return maxa;

	}
};