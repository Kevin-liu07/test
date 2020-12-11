

#include<stdio.h>
int main()
{
	int i, nu1 = 1, nu2 = 1, nu = 1, n; double r = 1, R = 1;
	printf("ÊäÈëÏîÊý \n");
	scanf("%d", &n);
	if (n >= 3)
	{
		for (i = 3; i <= n; i++)
		{
			nu = nu1 + nu2;
			nu2 = nu1; nu1 = nu;
			r = (double)nu1 / (double)nu2;
			R += r;
			printf("\n%lf  ", r); printf("%d\n", nu);
			printf("%lf\n", R);
		}
	}
	if (n<3)
	{
		printf("%lf  ", r); printf("%d\n", nu);
		printf("%lf\n", R);
	}
	return 0;
}