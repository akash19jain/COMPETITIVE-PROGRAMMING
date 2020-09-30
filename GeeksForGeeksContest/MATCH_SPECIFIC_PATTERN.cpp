string encode(string str)
{
	map<char, int> mp;
	string ans = "";
	int x = 0;
	int n = str.length();
	for (int i = 0; i < n; i++)
	{
		if (mp.find(str[i]) == mp.end())
		{
			mp[str[i]] = x;
			x++;
		}
		ans += to_string(mp[str[i]]);
	}
	return res;

}

vector<string> findMatchedWords(vector<string> dict, string pattern)
{
	int n = pattern.length();
	string hash = "";
	hash = encode(pattern);

	vector<string> ans;
	for (int i = 0; i < dict.size(); i++)
	{
		if (encode(dict[i]) == hash)
		{
			ans.push_back(dict[i]);
		}
	}
	return ans;

}