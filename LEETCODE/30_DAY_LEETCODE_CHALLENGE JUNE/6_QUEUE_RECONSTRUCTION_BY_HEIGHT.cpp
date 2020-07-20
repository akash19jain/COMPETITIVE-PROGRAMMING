class Solution
{
public:
	static bool mycomp(vector<int>a, vector<int>b)
	{
		if (a[0] == b[0])
			return a[1] < b[1];

		return a[0] > b[0];

	}
	vector<vector<int>> reconstructQueue(vector<vector<int>>& people)
	{
		int n = people.size();
		vector<vector<int>>ans;

		sort(people.begin(), people.end(), mycomp);


		for (int i = 0; i < people.size(); i++)
		{

			auto index = ans.begin() + people[i][1];
			ans.insert(index, people[i]);

		}

		return ans;
	}
};