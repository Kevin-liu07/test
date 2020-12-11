

#include<stdio.h>
int main()
{
	double x; int y;
	scanf("%lf", &x);
	if (x>0)
	{
		y = 1;
		printf("%d", y);
	}
	else
	{
		y = -1;
		printf("%d", y);
	}
	return 0;
}