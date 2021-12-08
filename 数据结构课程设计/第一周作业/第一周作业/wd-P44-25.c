#include<stdio.h>
int main()
{
	int n, i, j;
	scanf("%d", &n);
	int* a = (int*)malloc(sizeof(int) * n);
	int* b = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	j = 0;
	for (i = 0; i < n; i += 2)
	{
		b[i] = a[j];
		j++;
	}
	for (i = n - 1; i > 0; i -= 2)
	{
		b[i] = a[j];
		j++;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", b[i]);
	}
	return 0;
}


