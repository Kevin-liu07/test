#include<stdio.h>

int main()
{
	long int n, i;
	printf("请输入正整数   \n");
	scanf_s("%d", &n);
	long int w = 1;
	for (i = 1; i <= n;)
	{
		w = w*i;
		i++;
	}
	printf("%ld\n", w);
	return 0;
}