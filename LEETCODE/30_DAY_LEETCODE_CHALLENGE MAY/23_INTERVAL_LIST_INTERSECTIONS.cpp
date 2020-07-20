class Solution
{
public:
	vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B)
	{
		vector<vector<int>> res;
		int n = A.size(), m = B.size();
		int i = 0, j = 0;
		while (i < n && j < m)
		{
			int l = max(A[i][0], B[j][0]);
			int h = min(A[i][1], B[j][1]);
			if (l <= h)
			{
				res.push_back({l, h});
			}
			if (h == A[i][1])
				i++;
			else
				j++;
		}
		return res;
	}
};