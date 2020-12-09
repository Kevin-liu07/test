输入两个整数a,b，要求计算
[（a - b) ^ 2 * (a / b) + (a+b)^4]/3的整数部分除以1024的余数.

#include<stdio.h>

int main()
{
	int a, b, m, n, x;
	double f, t;
	printf("输入a，b，中间用空格隔开\n");
	scanf("%d %d", &a, &b);
	m = a - b; n = a + b; f = (double)a / b;
	t = (m*m*f + n*n*n*n) / 3;
	x = (int)t % 1024;
	printf("t=%lf  \nx=%d\n", t, x);
	return 0;
}
