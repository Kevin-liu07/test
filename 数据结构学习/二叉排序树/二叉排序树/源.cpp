#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct tree {
	int data;
	struct tree* lchild, * rchild;
}Tree;
int p = 0, len;
char ch[100];
int right = 1;
int read() {
	while (p < len && ch[p] != '#' && (ch[p] < '0' || ch[p]>'9')) {
		p++;
	}
	if (p < len && ch[p] == '#') {
		p++;
		return '#';
	}
	int ret = 0;
	while (p < len && ch[p] >= '0' && ch[p] <= '9')
	{
		ret = ret * 10 + ch[p] - '0';
		p++;
	}
	return ret;
}

Tree* createtree() {
	Tree* T;
	int x;
	x = read();
	if (x == '#')return NULL;
	else {
		T = (Tree*)malloc(sizeof(Tree));
		T->data = x;
		T->lchild = createtree();
		T->rchild = createtree();
		return T;
	}
}
int judge(Tree* T) {
	if (T->lchild) {
		if (T->lchild->data < T->data) {
			judge(T->lchild);
		}
		else right = 0;
	}
	else if (T->rchild) {
		if (T->rchild->data > T->data) {
			judge(T->rchild);
		}
		else right = 0;
	}
	return right;
}

int Search(Tree* T, int n, int deep) {
	if (!T)return 0;
	else if (T->data == n)return deep;
	else
	{
		return Search(T->lchild, n, deep + 1);
		return Search(T->rchild, n, deep + 1);
	}
}

int main()
{
	int n;
	Tree* T = (Tree*)malloc(sizeof(Tree));
	gets(ch);
	len = strlen(ch);
	T = createtree();
	scanf("%d", &n);
	if (judge(T))printf("yes\n");
	else printf("no\n");
	printf("%d\n", Search(T, n, 1));
}
