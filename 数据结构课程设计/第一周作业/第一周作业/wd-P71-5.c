#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


typedef struct {
	int data[20];
	int top1,  top2;
}Dstack;
int main000()
{
	int  n;
	scanf("%d", &n);
	int i, j;
	Dstack d;
	d.top1 = 0; d.top2 = n - 1;
	for (i = 0; i < n; i++) {
		int e;
		scanf("%d", &e);
		d.data[i] = e;
	}
	for (i = 0; i < n; i++) {
		if (d.data[i] == '#') {
			d.top1 = i;
			break;
		}
	}
	for (i = n-1; i> 0 ; i--) {
		if (d.data[i] == '#') {
			d.top2 = i;
			break;
		}
	}
	int n0 = d.top2 - d.top1 + 1;
	char s, data;
	for(i=0;i<n0;i++){
		scanf(" %c %c", &s, &data);
		if (s == '0') {
			d.data[d.top1++] = data;
		}
		else {
			d.data[d.top2--] = data;
		}
	}
	for (i = 0; i < n; i++) {
		printf("%c ", d.data[i]);
	}
	return 0;
}