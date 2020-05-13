#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	char *ptr;
	int  cntV, cntC;
	gets(str);

	//assign address of str to ptr
	ptr = str;

	cntV = cntC = 0;
	while (*ptr != '\0')
	{
		if (*ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U' || *ptr == 'a' || *ptr == 'e' || *ptr == 'i'
		        || *ptr == 'o' || *ptr == 'u')
			cntV++;
		else
			cntC++;
		//increase the pointer, to point next character
		ptr++;
	}
	ptr--;

	printf("Total number of VOWELS: %d, CONSONANT: %d\n", cntV, cntC);
	return 0;
}