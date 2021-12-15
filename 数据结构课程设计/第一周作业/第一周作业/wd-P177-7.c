#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef struct cstree {
	char data;
	struct cstree* lchild, * bro;
}cst;
cst* createCStree( char data[], int degree[], int n) {
	int l,j,k;
	cst** temp = (cst**)malloc(sizeof(cst*)*15);
	for (l = 0; l < n; l++) {
		temp[l]->data = data[l];
		temp[l]->lchild = temp[l]->bro = NULL;
	}
	k = 0;
	int d;
	for (l = 0; l < n; l++) {
		d = degree[l];
		if (d) 
		{
			temp[l]->lchild = temp[++k];
			for (j = 2; j <= d; j++) {
				temp[k]->bro = temp[k + 1];
				k++;
			}
		}
	}
	return temp[0];
}

void printcstree(cst* T) {
	if (!T)return;
	printcstree(T->lchild);
	printf("%c ", T->data);
	printcstree(T->bro);
}

int main123()
{
	int n,i;
	scanf("%d", &n);
	char* data = (char*)malloc(sizeof(char) * n);
	int* degree = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++) {
		scanf(" %c", &data[i]);
	}
	for (i = 0; i < n; i++) {
		scanf("%d", &degree[i]);
	}
	cst* T = (cst*)malloc(sizeof(cst));
	T=createCStree(data,degree,n);
	printcstree(T);

}
