#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void sort(int a[], int n)
{
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

}
int main()
{
	int n;
	scanf("%d", &n);
	int* a = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	sort(a, n);
	for (int j = 0; j < n; j+=2) {
		printf("%d ", a[j]);
	}
	for (int j = n-2; j >= 0; j -= 2) {
		printf("%d ", a[j]);
	}

	return 0;
}
