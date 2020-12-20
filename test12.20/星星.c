#include<stdio.h>
int main()

{
	int i, j;
	for (i = 0; i <= 14; ++i)
	{
		for (j = i; j<14; ++j)
		{
			printf(" ");
		}
		for (j = 14 - i; j <= 14; ++j)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}