#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef struct datafreq {
	int data;
	int freq;
}dict;
typedef struct linklist {
	dict d;
	struct linklist* next;
	struct linklist* pred;
}Lnode;
int main3()
{
	int n, i, j, k;
	scanf("%d", &n);
	dict *a=(dict*)malloc(sizeof(dict)*n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i].data);
	}
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i].freq);
	}
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[i].freq > a[j].freq) {
				dict temp = a[j];
				for (k = j; k > i; k--) {
					a[k] = a[k - 1];
				}
				a[i] = temp;
			}
		}
	}
	Lnode* head = (Lnode*)malloc(sizeof(Lnode));
	Lnode* p, * q;
	head->next = NULL;
	for (i = 0; i < n; i++) {
		p = (Lnode*)malloc(sizeof(Lnode));
		p->d = a[i];
		p->next = head->next;
		head->next = p;
	}
	q = (Lnode*)malloc(sizeof(Lnode));
	q = head->next;
	while (q) {
		printf("%d ", q->d.data);
		q = q->next;
	}
	return 0;
}
