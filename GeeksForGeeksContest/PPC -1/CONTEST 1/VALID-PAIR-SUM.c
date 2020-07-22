//https://practice.geeksforgeeks.org/contest-problem/valid-pair-sum/1/

int ValidPair(int* array, int n)
{
	int ans = 0;
	sort(array, array + n);

	for (int i = 0; i < n; i++)
	{
		if (array[i] <= 0)
			continue;

		int j = lower_bound(array, array + n, 1 - array[i]) - array;

		ans += i - j;
	}
	return ans;

}