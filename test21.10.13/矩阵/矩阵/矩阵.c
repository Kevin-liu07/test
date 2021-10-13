#include <stdio.h>
#include <stdlib.h>

int main() {
	int a1[4][4] = { {1,2,0,0},{0,0,1,0},{1,0,0,1},{0,0,1,0} };
	int a2[4][4] = { {0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0} }, a3[4][4] = { {0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0} } ,a4[4][4] = { {0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0} };
	//绘制D的邻接矩阵A
	int i, j, l;
	printf("打印A\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", a1[i][j]);
		}
		printf("\n");
	}

	printf("\n");
	//第二题 计算长度为4的通路数
	//计算A2
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			for (l = 0; l < 4; l++) {
				a2[i][j] += a1[i][l] * a1[l][j];
			}
		}
	}
	printf("打印A2\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", a2[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	//计算A3
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			for (l = 0; l < 4; l++) {
				a3[i][j] += a2[i][l] * a1[l][j];
			}
		}
	}
	printf("打印A3\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", a3[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	//计算A4
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			for (l = 0; l < 4; l++) {
				a4[i][j] += a2[i][l] * a2[l][j];
			}
		}
	}
	printf("打印A4\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", a4[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	//长度为4的通路书即是A4中各数之和
	int sum=0;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			sum += a4[i][j];
		}
	}
	printf("长度为4的通路数为%d\n\n", sum);
	//*计算可达矩阵
	/*因为两点可达的最短路径小于等于3*/
	int a[4][4]= { {1,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1} };
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (a1[i][j] != 0 || a2[i][j] != 0 || a3[i][j] != 0)a[i][j] = 1;
			else a[i][j] = 0;
		}
	}
	printf("打印出可达矩阵\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}


