#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdbool.h>

//˳��洢
#define MAXSIZE 100
struct TreeNode {
	int value;
	bool isEmpty;
};
struct TreeNode t[MAXSIZE];
//����������ʽ�洢
typedef struct BiTNode {
	int data;
	struct BiTNode* lchild, * rchild;
}BiTNode,*BiTree;
