class Solution
{
public:
	string removeKdigits(string num, int k)
	{
		string ans = "";
		int n = num.size(), keep = n - k;
		for (char c : num)
		{
			while (k && ans.size() && ans.back() > c)
			{
				ans.pop_back();
				--k;
			}
			ans.push_back(c);
		}
		ans.resize(keep);
		while (!ans.empty() && ans[0] == '0')
			ans.erase(ans.begin());
		if (ans.empty())
			return "0";
		return ans;
	}
};