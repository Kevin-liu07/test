#include<stdio.h>

int main()
{
	int i = 500;
	while (i <= 1000)
	{
		if (i % 5 == 3 && i % 7 == 6 && i % 11 == 4)
		{
			printf("%d\n", i);
		}
		i++;
	}
	return 0;
}