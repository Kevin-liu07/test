#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{
	int i = 10;
	while (i >= 1)
	{
		i--;
		if (i == 7){ continue; }
		printf("\n%d", i);
	}
	return 0;
}