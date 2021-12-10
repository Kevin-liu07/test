#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdbool.h>

//Ë³Ðò´æ´¢
#define MAXSIZE 100
struct TreeNode {
	int value;
	bool isEmpty;
};
struct TreeNode t[MAXSIZE];
//¶þ²æÊ÷µÄÁ´Ê½´æ´¢
typedef struct BiTNode {
	int data;
	struct BiTNode* lchild, * rchild;
}BiTNode,*BiTree;
