//https://practice.geeksforgeeks.org/contest-problem/coins-of-tomland/1/
int Maximum_Sum(vector<vector<int>> &mat, int N, int k)
{

	int sum[N][N];
	for (int j = 0; j < N; j++)
	{
		int x = 0;
		for (int i = 0; i < k; i++)
			x += mat[i][j];
		sum[0][j] = x;

		for (int i = 1; i < N - k + 1; i++)
		{
			x += (mat[i + k - 1][j] - mat[i - 1][j]);
			sum[i][j] = x;
		}
	}
	int maxsum = INT_MIN;

	for (int i = 0; i < N - k + 1; i++)
	{
		int x = 0;
		for (int j = 0; j < k; j++)
			x += sum[i][j];

		if (x > maxsum)
		{
			maxsum = x;
		}
		for (int j = 1; j < N - k + 1; j++)
		{
			x += (sum[i][j + k - 1] - sum[i][j - 1]);
			if (x > maxsum)
			{
				maxsum = x;
			}
		}
	}


	return maxsum;
}