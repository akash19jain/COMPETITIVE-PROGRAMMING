#include<stdio.h>

int main()
{
	int count, n, diff, a;

	count = 1;	//loop counter
	a = 1;		//series starting number
	diff = 10;	//difference variable initialization
	scanf("%d", &n);
start:	//label
	printf(" %d ", a);
	a = a + diff;
	diff = diff + 10;
	count++;
	if (count <= n)
		goto start;

	return 0;
}
