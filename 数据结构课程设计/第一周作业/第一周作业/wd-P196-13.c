#include "stdio.h"
#include "malloc.h"
#include "string.h"
#include "string"
typedef struct {
	int data;
	int parent, lchild, rchild;
} HTNode, * HuffmanTree;

void InitHuffmanTree(HuffmanTree H, int weight, int parent, int lchild, int rchild)
{
	H->lchild = lchild;
	H->rchild = rchild;
	H->parent = parent;
	H->data = weight;
}

void CreateHuffmanTree(HuffmanTree& HT, int n, int* W)
{

	HT = (HuffmanTree)malloc((2 * n - 1) * sizeof(HTNode));
	for (int i = 0; i < n; i++) {
		InitHuffmanTree(HT + i, W[i], -1, -1, -1);
	}
	for (int i = n; i < 2 * n - 1; i++) {
		int min1 = 65522, min2 = min1;
		int x1 = -1, x2 = -1;
		for (int j = 0; j < i; j++) {
			if ((HT + j)->parent == -1)
				if ((HT + j)->data < min1) {
					min2 = min1;
					min1 = (HT + j)->data;
					x2 = x1;
					x1 = j;
				}
				else if ((HT + j)->data < min2) {
					min2 = (HT + j)->data;
					x2 = j;

				}
		}
		(HT + x1)->parent = i;
		(HT + x2)->parent = i;

		InitHuffmanTree(HT + i, min2 + min1, -1, x1, x2);//父结点构造 
	}
}

void HuffmanTreeCode(HuffmanTree HT, char* str, int n, int path, int& e)
{
	int i = 0, j = 0, m = 0;
	int child = path;
	int parent = (HT + child)->parent;
	for (i = n - 1; parent != -1; i--)
		if ((HT + parent)->lchild == child) {
			str[j++] = '0';
			child = parent;
			parent = (HT + child)->parent;
		}
		else {
			str[j++] = '1';
			child = parent;
			parent = (HT + child)->parent;
		}
	e = j;
}


int main()
{
	int i, n = 6;
	int e, k;
	int w[6] = { 10,35,40,50,60,200 };
	HuffmanTree HT;
	CreateHuffmanTree(HT, n, w);
	char str[n];
	char ch;
	ch = getchar();
	switch (ch) {
	case 'A':
		k = 0;
		break;
	case 'B':
		k = 1;
		break;
	case 'C':
		k = 2;
		break;
	case 'D':
		k = 3;
		break;
	case 'E':
		k = 4;
		break;
	case 'F':
		k = 5;
		break;
	}
	HuffmanTreeCode(HT, str, n, k, e);
	for (int j = e - 1; j >= 0; j--)
		printf("%c ", str[j]);
	free(HT);
	return 0;
}
