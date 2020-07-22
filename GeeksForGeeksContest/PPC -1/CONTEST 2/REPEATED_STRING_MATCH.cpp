//https://practice.geeksforgeeks.org/contest-problem/repeated-string-match/1/
int repeatedStringMatch(string A, string B)
{
	string c;
	int i = 1;
	int k = B.size() / A.size();
	for (i = 0; i < k; i++)
		c = c + A;
	if (c.find(B) != string::npos)
	{
		return k;
	}
	c += A;
	if (c.find(B) != string::npos)
	{
		return k + 1;
	}

	c += A;
	if (c.find(B) != string::npos)
	{
		return k + 2;
	}
	return -1;
}