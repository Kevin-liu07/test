#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int *a=(int*)malloc(sizeof(int)*n) 

typedef struct Edge {
    int v1;
    int v2;
    int weight;
}Edge;

int main()
{
    int n, m, i, j;
    printf("�����������ͱߵ�����\n");
    scanf("%d %d", &n, &m);
    Edge* e = (Edge*)malloc(sizeof(Edge) * m);
    printf("�����,��ʽΪ �󶥵� �Ҷ��� Ȩֵ:\n");
    for (i = 0; i < m; i++) {
        scanf("%d %d %d", &e[i].v1, &e[i].v2, &e[i].weight);
    }
    //��Ȩֵ��С��������
    for (i = 0; i < m; i++) {
        for (j = i + 1; j < m; j++) {
            if (e[i].weight > e[j].weight) {
                Edge temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }
    //������С������ 
    printf("��С������Ϊ��\n");
    int* V = (int*)malloc(sizeof(int) * n);
    int s1, s2, v1, v2, k = 0;
    for (i = 1; i <= n; i++) {
        V[i] = i;
    }
    i = 0;
    while (k < n) {
        v1 = e[i].v1;
        v2 = e[i].v2;
        s1 = V[v1];
        s2 = V[v2];
        if (s1 != s2) {
            printf("%d-%d %d\n", v1, v2, e[i].weight);
            k++;
            for (j = 1; j <= n; j++) {
                if (V[j] == V[v2]) {
                    V[j] = V[v1];
                }
            }
        }
        i++;
    }
    return 0;
}
