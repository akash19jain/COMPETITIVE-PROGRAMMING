bool isIsogram(string s)
{
	//Your code here
	int n = s.length();
	if (n > 26)
		return false;

	int count[26];
	for (int i = 0; i < 26; i++)
		count[i] = 0;

	for (int i = 0; i < n; i++)
	{
		int x = s[i] - 'a';
		count[x]++;
		if (count[x] >= 2)
			return false;
	}
	return true;
}