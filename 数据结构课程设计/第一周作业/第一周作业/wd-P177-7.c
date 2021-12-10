#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef struct cstree {
	char data;
	struct cstree* lchild, * bro;
}cst;
void createCStree(cst* T, char data[], int degree[], int n) {
	int l,j,k;
	cst** temp = (cst**)malloc(sizeof(cst*) * n);
	for (l = 0; l < n; l++) {
		temp[l]=(cst*)malloc(sizeof(cst));
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
	T = (cst*)malloc(sizeof(cst));
	T = temp[0];
}
//void createCStree(cst* T, int data[], int degree[], int n) {
//
//	cst**temp = (cst**)malloc(sizeof(cst) * n); //创建临时数组
//	for (int i = 0; i < n; i++) {  //把每一个节点放进临时数组
//		temp[i] = (cst*)malloc(sizeof(cst));
//		temp[i]->data = data[i];
//		temp[i]->lchild = temp[i]->bro = NULL; //初始化兄弟与孩子结点
//
//	}
//	int index = 1; //指向数组还未操作的结点 默认根节点已经被操作了
//	int d;//d表示当前结点的度数;
//	for (int j = 0; j < n; j++) {
//		d = degree[j];   //获取当前结点的度数
//		if (d) {  //若不是叶子结点 开始找儿子 
//			temp[j]->lchild = temp[index];  //首先找到第一个儿子结点
//
//			for (int k = 2; k <= d; k++) {  //然后给第一个儿子结点找兄弟结点 注意 k=2 表示的是 从第二个孩子开始 一共有 d孩子 d是度数
//				index++;
//				temp[index - 1]->bro = temp[index]; //index -1 为上一个孩子结点也就是 父节点的第一个孩子/或者是上一个孩子的兄弟 剩下的孩子结点依次是上一个孩子的右兄弟
//			}
//		}
//
//	}
//	T = *temp;
//}


void printcstree(cst* T) {
	if (!T)return;
	printcstree(T->lchild);
	printf("%c ", T->data);
	printcstree(T->bro);
}

int main()
{
	int n,i;
	scanf("%d", &n);
	char* data = (char*)malloc(sizeof(char) * n);
	int* degree = (int*)malloc(sizeof(int) * n);
	for (i = 0; i < n; i++) {
		scanf(" %c", &data[i]);
		printf("%c ", data[i]);
	}
	for (i = 0; i < n; i++) {
		scanf("%d", &degree[i]);
	}
	cst* T = (cst*)malloc(sizeof(cst));
	createCStree(T,data,degree,n);
	printcstree(T);

}
