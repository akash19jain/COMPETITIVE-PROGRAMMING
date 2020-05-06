class Solution {
public:
	int findComplement(int num)
	{
		int c = 1;
		while (c < num)
		{
			c = (c << 1) + 1;
		}
		return num ^ c;
	}
};