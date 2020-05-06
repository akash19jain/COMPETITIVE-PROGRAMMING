class Solution {
public:
	int firstUniqChar(string s)
	{
		int n = s.length();
		int count[26];
		memset(count, -1, sizeof(count));

		for (int i = 0; i < n; i++)
		{
			int x = s[i] - 'a';
			if (count[x] == -1)
			{
				count[x] = i;
			}
			else if (count[x] == -2)
				continue;
			else
				count[x] = -2;
		}
		int min = 100000;
		for (int i = 0; i < 26; i++)
		{
			//cout<<count[i]<<" ";
			if (count[i] == -2 || count[i] == -1)
				continue;
			if (count[i] < min)
			{
				min = count[i];
			}
		}
		if (min == 100000)
			return -1;
		return min;
	}
};