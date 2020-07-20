class Solution
{
public:
	vector<int> largestDivisibleSubset(vector<int>& nums) {
		int n = nums.size();
		vector<int>result;
		if (n == 0)return result;
		sort(nums.begin(), nums.end());
		vector<int>ans(n, 0);
		vector<int>latest(n, -1);


		for (int i = 1; i < n; i++) {

			for (int j = 0; j < i; j++) {

				if (nums[i] % nums[j] == 0 && ans[i] < ans[j] + 1) {
					ans[i] = ans[j] + 1;
					latest[i] = j;
				}
			}
		}

		int m = -1;
		int index = -1;
		for (int i = 0; i < n; i++) {
			if (ans[i] > m) {
				m = ans[i];
				index = i;
			}
		}


		while (latest[index] != -1) {
			result.push_back(nums[index]);
			index = latest[index];
		}
		result.push_back(nums[index]);
		return result;


	}
};