#include<stdio.h>
#include<math.h>
int main()
{
	int n, i, j, k;
	char c = 'A';
	scanf("%d", &n);
	for (i = 1; i <= 2 * n - 1; i++)
	{
		for (k = 1; k <= abs(n - i); k++){ printf(" "); }
		for (k = 1; k <= (2 * n - 1) - 2 * abs(n - i); k++)
		{
			printf("%c", c);
		}
		printf("\n");
		c++;
	}
	return 0;
}