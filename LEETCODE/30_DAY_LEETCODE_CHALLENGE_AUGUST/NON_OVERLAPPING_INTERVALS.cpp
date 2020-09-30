bool comp(vector<int> &a, vector<int> &b)
{
	return a[1] < b[1];
}
class Solution {
public:
	int eraseOverlapIntervals(vector<vector<int>>& intervals)
	{
		sort(intervals.begin(), intervals.end(), comp);
		int n = intervals.size();
		if (n == 0)
			return 0;
		int ans = 0;
		int prev = intervals[0][1];
		for (int i = 1; i < n; i++)
		{
			if (prev > intervals[i][0])
			{
				ans++;
			}
			else
			{
				prev = intervals[i][1];
			}
		}
		return ans;

	}
};