class Solution {
public:
	int maxSubarraySumCircular(vector<int>& A)
	{
		int n = A.size();
		if (n == 0)
			return 0;

		int tot = 0, ma = A[0], last_ma = 0, mi = A[0], last_mi = 0;
		for (int i = 0; i < n; i++)
		{
			tot += A[i];
			ma = max(ma, last_ma = A[i] + max(0, last_ma));
			mi = min(mi, last_mi = A[i] + min(0, last_mi));
		}
		return ma < 0 ? ma : max(ma, tot - mi);
	}
};