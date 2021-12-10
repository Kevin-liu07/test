#include<stdio.h>
#include<stdlib.h>
int main0()
{
	int n,i,j;
	scanf_s("%d", &n);
	int* a = (int*)malloc(2 * n * sizeof(int));
	for (i = 0; i < 2 * n; i++) {
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i < 2 * n; i++) {
		for (j = i + 1; j < 2 * n; j++) {
			if (a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("%d", a[(2*n + 1) / 2-1]);
	return 0;
}