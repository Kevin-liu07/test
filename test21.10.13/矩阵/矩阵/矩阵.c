#include <stdio.h>
#include <stdlib.h>

int main() {
	int a1[4][4] = { {1,2,0,0},{0,0,1,0},{1,0,0,1},{0,0,1,0} };
	int a2[4][4] = { {0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0} }, a3[4][4] = { {0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0} } ,a4[4][4] = { {0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0} };
	//����D���ڽӾ���A
	int i, j, l;
	printf("��ӡA\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", a1[i][j]);
		}
		printf("\n");
	}

	printf("\n");
	//�ڶ��� ���㳤��Ϊ4��ͨ·��
	//����A2
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			for (l = 0; l < 4; l++) {
				a2[i][j] += a1[i][l] * a1[l][j];
			}
		}
	}
	printf("��ӡA2\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", a2[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	//����A3
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			for (l = 0; l < 4; l++) {
				a3[i][j] += a2[i][l] * a1[l][j];
			}
		}
	}
	printf("��ӡA3\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", a3[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	//����A4
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			for (l = 0; l < 4; l++) {
				a4[i][j] += a2[i][l] * a2[l][j];
			}
		}
	}
	printf("��ӡA4\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", a4[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	//����Ϊ4��ͨ·�鼴��A4�и���֮��
	int sum=0;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			sum += a4[i][j];
		}
	}
	printf("����Ϊ4��ͨ·��Ϊ%d\n\n", sum);
	//*����ɴ����
	/*��Ϊ����ɴ�����·��С�ڵ���3*/
	int a[4][4]= { {1,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1} };
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (a1[i][j] != 0 || a2[i][j] != 0 || a3[i][j] != 0)a[i][j] = 1;
			else a[i][j] = 0;
		}
	}
	printf("��ӡ���ɴ����\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}


