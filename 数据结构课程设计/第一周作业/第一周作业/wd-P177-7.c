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
//	cst**temp = (cst**)malloc(sizeof(cst) * n); //������ʱ����
//	for (int i = 0; i < n; i++) {  //��ÿһ���ڵ�Ž���ʱ����
//		temp[i] = (cst*)malloc(sizeof(cst));
//		temp[i]->data = data[i];
//		temp[i]->lchild = temp[i]->bro = NULL; //��ʼ���ֵ��뺢�ӽ��
//
//	}
//	int index = 1; //ָ�����黹δ�����Ľ�� Ĭ�ϸ��ڵ��Ѿ���������
//	int d;//d��ʾ��ǰ���Ķ���;
//	for (int j = 0; j < n; j++) {
//		d = degree[j];   //��ȡ��ǰ���Ķ���
//		if (d) {  //������Ҷ�ӽ�� ��ʼ�Ҷ��� 
//			temp[j]->lchild = temp[index];  //�����ҵ���һ�����ӽ��
//
//			for (int k = 2; k <= d; k++) {  //Ȼ�����һ�����ӽ�����ֵܽ�� ע�� k=2 ��ʾ���� �ӵڶ������ӿ�ʼ һ���� d���� d�Ƕ���
//				index++;
//				temp[index - 1]->bro = temp[index]; //index -1 Ϊ��һ�����ӽ��Ҳ���� ���ڵ�ĵ�һ������/��������һ�����ӵ��ֵ� ʣ�µĺ��ӽ����������һ�����ӵ����ֵ�
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
