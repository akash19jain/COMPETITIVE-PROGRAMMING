class Solution {
public:
	string frequencySort(string s)
	{
		int n = s.length();
		map<char, int> mp;
		for (int i = 0; i < n; i++)
		{
			mp[s[i]]++;
		}
		auto pred = [&mp] (char a, char b) {
			return mp[a] > mp[b] || (mp[a] == mp[b] && a < b);
		};

		sort(s.begin(), s.end(), pred);

		return s;
	}
};