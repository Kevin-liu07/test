#include<stdio.h>
int main()
{
	int num[20], i;
	for (i = 0; i < 20; i++)
	{
		scanf_s("%d", &num[i]);
	}
	int max;
	max = num[0];
	for (i = 0; i <= 20; i++)
	{
		if (max < num[i]){ max = num[i]; }
	}
	printf("%d", max);
	return 0;
}