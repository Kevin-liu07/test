#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int value;
	struct node* next;
} Node;
int main()
{
	Node* head = NULL;
	int number;
	do {
		scanf("%d", &number);
		if (number != -1) {
			Node* p = (Node*)malloc(sizeof(Node));
			p->value = number;
			p->next = NULL;
			Node* last = head;
			if (last) {
				while (last->next) {
					last = last->next;
				}
			}
			else {
				head = p;
			}

		}
	} while (number != -1);
	return 0;
}