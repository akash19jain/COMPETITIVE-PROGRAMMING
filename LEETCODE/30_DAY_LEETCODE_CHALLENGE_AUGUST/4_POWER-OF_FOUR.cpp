class Solution {
public:
	bool isPowerOfFour(int num)
	{
		if (num <= 0)
			return false;
		double x = log10(num) / log10(4);
		if ( x == (int)x)
			return true;
		return false;
	}
};