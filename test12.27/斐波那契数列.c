#include<stdio.h>
int main()
{
	int u[100], i;
	u[0] = 1;
	u[1] = 1;
	for (i = 2; i <= 20; i++){ u[i] = u[i - 1] + u[i - 2]; }
	for (i = 0; i <= 20; i++) printf("u[%d]=%d\n", i, u[i]);
	return 0;
}