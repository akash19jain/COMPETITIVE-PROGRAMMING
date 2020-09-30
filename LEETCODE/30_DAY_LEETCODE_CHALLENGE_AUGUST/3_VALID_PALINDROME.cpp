class Solution {
public:
	bool isPalindrome(string s)
	{
		int n = s.length();
		vector<char> a;
		for (int i = 0; i < n; i++)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				a.push_back(s[i]);
			else if (s[i] >= '0' && s[i] <= '9')
				a.push_back(s[i]);
			else if (s[i] >= 'A' && s[i] <= 'Z')
			{
				s[i] = s[i] - 'A' + 'a';
				a.push_back(s[i]);
			}
		}
		int f = 0;
		int n1 = a.size();
		for (int i = 0; i < n1 / 2; i++)
		{
			if (a[i] != a[n1 - i - 1])
			{
				f = 1;
				break;
			}
		}
		if (f)
			return false;
		return true;
	}
};