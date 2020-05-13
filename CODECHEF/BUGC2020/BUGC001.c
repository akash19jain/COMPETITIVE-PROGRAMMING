#include<stdio.h>
int main()
{
	int count, t, r;
	t = 2;
	count = 1;
start:
	if (count <= 10)
	{
		r = t * count;
		printf("%d*%d=%d\n", t, count, r);
		count++;
		goto start;
	}
}