#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h> 
#include<stdlib.h>
typedef struct Tree {
	char data;
	struct Tree* lchild, * rchild;
}BiTNode, * BiTree;

BiTNode* CreateTree() {
	BiTree T;
	char ch;
	scanf("%c", &ch);
	if (ch == '#')return NULL;
	else {
		T = (BiTree)malloc(sizeof(BiTNode));
		T->data = ch;
		T->lchild=CreateTree();
		T->rchild=CreateTree();
		return T;
	}
}
void InorderTraverse(BiTNode* T) {
	if (!T) {
		return;
	}
	InorderTraverse(T->lchild);
	printf("%c", T->data);
	InorderTraverse(T->rchild);
}
int main00() {
	BiTree T;
	T=CreateTree();
	T->lchild->lchild->lchild->data = '(';
	T->lchild->lchild->lchild->lchild = NULL;
	T->lchild->lchild->lchild->rchild = NULL;
	T->lchild->rchild->rchild->data = ')';
	T->lchild->rchild->rchild->rchild = NULL;
	T->lchild->rchild->rchild->lchild = NULL;
	T->rchild->lchild->lchild->data = '(';
	T->rchild->lchild->lchild->lchild = NULL;
	T->rchild->lchild->lchild->rchild = NULL;
	T->rchild->rchild->lchild->data = '(';
	T->rchild->rchild->lchild->lchild = NULL;
	T->rchild->rchild->lchild->rchild = NULL;
	T->rchild->rchild->rchild->rchild->data = ')';
	T->rchild->rchild->rchild->rchild->lchild = NULL;
	T->rchild->rchild->rchild->rchild->rchild->data = ')';
	T->rchild->rchild->rchild->rchild->rchild->lchild = NULL;
	T->rchild->rchild->rchild->rchild->rchild->rchild = NULL;
	InorderTraverse(T);

	return 0;
}

