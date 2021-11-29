#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef struct TreeNode
{
	char ch;
	struct TreeNode* left;
	struct TreeNode* right;
}Tree;

Tree* creat_tree(char* arr, int* p) 
{
	if (arr[*p] == '#') {
		return NULL;
	}
	else {
		Tree* root = (Tree*)malloc(sizeof(Tree));
		root->ch = arr[*p];
		++(*p);
		root->left = creat_tree(arr, p);
		++(*p);
		root->right = creat_tree(arr, p);
		return root;
	}
}
void zhongxu(Tree* root)
{
	if (root == NULL) 
	{
		return;
	}
	zhongxu(root->left);
	printf("%c ", root->ch);
	zhongxu(root->right);
}
int main()
{
	char arr[100];
	scanf("%s", arr);
	int i = 0;
	Tree* root = creat_tree(arr, &i);
	zhongxu(root);
	return 0;
}