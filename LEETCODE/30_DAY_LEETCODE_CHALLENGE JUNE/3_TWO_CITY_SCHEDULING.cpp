class Solution
{
public:

	int twoCitySchedCost(vector<vector<int>>& costs)
	{
		int res = 0;
		for (int i = 0; i < costs.size(); i++)
		{
			int k = (costs[i][0] - costs[i][1]); //find difference and insert at begining of vector
			costs[i].insert(costs[i].begin(), k);
		}
		sort(costs.begin(), costs.end());  //sort according to zeroth index i.e difference.

		for (int i = 0; i < costs.size() / 2; i++)
		{
			res += costs[i][1] + costs[i + costs.size() / 2][2]; //for 0 to n/2 A , further B
		}
		return res;
	}
};