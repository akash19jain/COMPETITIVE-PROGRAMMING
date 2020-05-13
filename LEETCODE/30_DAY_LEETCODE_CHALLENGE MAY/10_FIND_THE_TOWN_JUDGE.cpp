class Solution
{
public:
	int findJudge(int N, vector<vector<int>>& trust)
	{
		int n = trust.size();
		int count[N + 1];
		memset(count, 0, sizeof(count));

		for (int i = 0; i < n; i++)
		{
			count[trust[i][0]]--;
			count[trust[i][1]]++;
		}
		int f = 0;
		for (int i = 1; i <= N; i++)
		{
			if (count[i] == N - 1)
			{
				return i;
			}
		}
		return -1;
	}
};