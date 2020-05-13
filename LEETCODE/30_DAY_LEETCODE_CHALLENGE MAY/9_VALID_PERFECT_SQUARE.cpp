class Solution {
public:
	bool isPerfectSquare(int num)
	{
		long long c = num;
		while (c * c > num)
		{
			c = (c + num / c) >> 1;
		}
		return c * c == num;
	}
};