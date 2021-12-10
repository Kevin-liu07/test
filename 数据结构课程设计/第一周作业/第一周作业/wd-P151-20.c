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
void InorderTraverse(BiTNode* T, int deep) {
	if (!T) {
		return;
	}
	else if(T->lchild ==NULL&&T->rchild==NULL){
		printf("%c", T->data);
	}
	else{
		if (deep > 1)printf("(");
		InorderTraverse(T->lchild, deep + 1);
		printf("%c", T->data);
		InorderTraverse(T->rchild, deep + 1);
		if (deep > 1)printf(")");
	}
}
int main000000() {
	BiTree T;
	T=CreateTree();
	InorderTraverse(T,1);

	return 0;
}

