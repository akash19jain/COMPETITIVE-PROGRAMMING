

int numJewelsInStones(char * J, char * S)
{
	bool count[52] = {0};
	int l1 = strlen(J), l2 = strlen(S);

	for (int i = 0; i < l1; i++)
	{
		int x;
		if (J[i] >= 'A' && J[i] <= 'Z')
			x = J[i] - 'A';
		else
		{
			x = J[i] - 'a';
			x += 26;
		}
		count [x] = true;
	}
	int ans = 0;
	for (int i = 0; i < l2; i++)
	{
		int x;
		if (S[i] >= 'A' && S[i] <= 'Z')
			x = S[i] - 'A';
		else
		{
			x = S[i] - 'a';
			x += 26;
		}
		if (count[x])
			ans++;
	}
	return ans;
}

