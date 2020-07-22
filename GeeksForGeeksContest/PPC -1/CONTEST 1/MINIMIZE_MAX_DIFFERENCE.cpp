//https://practice.geeksforgeeks.org/contest-problem/minimize-max-difference-between-adjacent-elements-by-inserting-k-new-elements/1/

int minimizedMaxDiff(int arr[], int n, int k)
{
	int maxdif = -1;
	for (int i = 0; i < n - 1; i++)
	{
		maxdif = max(maxdif, abs(arr[i] - arr[i + 1]));
	}

	if (maxdif == 0)
		return 0;

	int l = 1, r = maxdif;

	while (l < r)
	{
		int m = (l + r) / 2;

		int x = 0;
		for (int i = 0; i < n - 1; i++)
		{
			x += (abs(arr[i] - arr[i + 1]) - 1) / m;
		}
		if (x > k)
			l = m + 1;
		else
			r = m;
	}
	return r;
}
