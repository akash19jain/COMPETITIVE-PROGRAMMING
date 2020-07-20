class Solution {
public:

	int helper(int n, vector<vector<int>>& flights, vector<int> ans, int pos, int dst, int k, int** dp) {
		if (k >= 0 && pos == dst)
			return 0;
		else if (k <= 0)return -1;
		if (dp[k][pos] != INT_MAX)
			return dp[k][pos];



		int min = INT_MAX;

		for (int j = 0; j < flights.size(); j++) {
			int st = flights[j][0], ds = flights[j][1], val = flights[j][2];
			if (st == pos) {
				ans[ds] = ans[pos] + val;
				int t = helper(n, flights, ans, ds, dst, k - 1, dp);
				if (t + ans[ds] < min && t != -1)
					min = t + ans[ds];
			}
		}
		dp[k][pos] = (min) == INT_MAX ? -1 : (min - ans[pos]);
		return dp[k][pos];
	}

	int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
		vector<int> ans(n, -1);
		int ** dp = new int*[K + 2];
		for (int i = 0; i <= K + 1; i++) {
			dp[i] = new int[n];
			for (int j = 0; j < n; j++)
				dp[i][j] = INT_MAX;
		}
		ans[src] = 0;
		int k = helper(n, flights, ans, src, dst, K + 1, dp);
		cout << dp[K + 1][src];
		return k;
	}
};