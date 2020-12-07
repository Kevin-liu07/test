#include <stdio.h>

int main()
{
	int x;
	printf("ÇëÊäÈëÊı×Ö  \n");
	scanf_s("%d", &x);
	int n = 0;
	while (x != 0)
	{
		x = x / 10;
		n++;
	}
	printf("%d\n", n);
	return 0;
}