#include<stdio.h>

int main()
{
	int a = 1, i ;
	for (i = 1; i <= 16;)
	{
		a *= 2;
		i++;
	}
	printf("%d\n", a);
	return 0;
}
