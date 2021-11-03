#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int m, n, i;
	scanf("%d %d", &m, &n);
	if (m > n)
	{
		int t = m;
		m = n;
		n = t;
	}
	int max = 0;
	for (i = 1; i < m; i++)
	{
		if (m % i == 0 && n % i == 0)
		{
			max = i;
		}
	}
	printf("%d", max);
	return 0;
}