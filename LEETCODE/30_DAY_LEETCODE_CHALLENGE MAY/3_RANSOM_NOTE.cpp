class Solution {
public:
	bool canConstruct(string ransomNote, string magazine)
	{
		int n = magazine.length();
		int count[26] = {0};
		for (int i = 0; i < n; i++)
		{
			int x = magazine[i] - 'a';
			count[x]++;
		}

		n = ransomNote.length();
		for (int i = 0; i < n; i++)
		{
			int x = ransomNote[i] - 'a';
			count[x]--;
			if (count[x] < 0)
				return false;
		}
		return true;
	}
};