#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, i, j;
	scanf("%d", &n);
	int *a=(int*)malloc(sizeof(int)*n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for (i = 0; i < n - 1; i++) {
		for (j = a[i] + 1; j < a[i + 1]; j++) {
			if (j > 0)printf("%d", j);
		}
	}
}



