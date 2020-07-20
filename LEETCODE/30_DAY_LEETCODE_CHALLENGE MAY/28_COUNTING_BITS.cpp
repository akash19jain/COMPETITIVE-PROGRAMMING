class Solution
{
public:
	vector<int> countBits(int num)
	{
		vector<int> res(num + 1, 0);
		if (num == 0)return res;
		res[1] = 1;
		for (int i = 2; i <= num; i++)
		{
			res[i] = res[i / 2] + (i % 2);
		}
		return res;
	}
};