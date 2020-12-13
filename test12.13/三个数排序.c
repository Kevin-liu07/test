#include<stdio.h>

int main()
{
	int a, b, c, x;
	scanf("%d %d %d\n", &a, &b, &c);
	if (a<b)
	{
		x = a;
		a = b;
		b = x;
	}
	if (a<c)
	{
		x = c;
		c = a;
		a = x;
	}
	if (b<c)
	{
		x = c;
		c = b;
		b = x;
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}