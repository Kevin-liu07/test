#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main11()
{
	int n,i;
	scanf("%d", &n);
	char* t = (char*)malloc(sizeof(char) * (n+1));
	for (i = 1; i <= n; i++) {
		scanf(" %c", &t[i]);
	}
	for (i = 1; i <= n; i++) {
		printf("%d ", next(t,i));
	}
	return 0;
}

int next(char a[], int i) {
	if (i == 1)return 0;
	else if (i == 2)return 1;
	else {
		char s = a[next(a,i - 1)];
		int next0 = i - 1;
		while (a[i - 1] != s) {
			next0 = next(a, next0);
			if (next0 == 0)return 1;
			s = a[next(a, next0)];
		}
		return next(a, next0)+1;
	}
}