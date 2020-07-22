//https://practice.geeksforgeeks.org/contest-problem/bit-difference702391/1/
long long sumBitDiff(int arr[], int n)
{
	//code here.
	long long ans = 0;
	for (int i = 0; i < 32; i++)
	{
		int c = 0;
		for (int j = 0; j < n; j++)
		{
			if ((arr[j] & (1 << i)))
				c++;
		}
		ans += (c * (n - c) * 2);
	}
	return ans;
}