//已知pi/4=1-1/3+1/5-1/7+7/9......
//求pi的值


#include<stdio.h>

int main()
{
	double i = 1; int sign = 1;
	long double sum = 0;

	while (i <= 10000)
	{
		sum += sign*1.0 / i;
		i += 2;
		sign = -1 * sign;
		printf("%f      %d      %lf\n", i, sign, 4 * sum);
	}
	printf("%lf\n", 4 * sum);
	return 0;
}