#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
void sort(int* p, int n)//将数组内元素从小到大排序
{
    int i, j;
    int min = 0;
    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            if (*(p + i) > *(p + j)) {
                min = *(p + j);
                *(p + j) = *(p + i);
                *(p + i) = min;
            }
        }
    }
}

int main()
{
    int n, i, j, k;
    printf("请输入权值个数:\n");
    scanf("%d", &n);
    int* a = (int*)malloc(sizeof(int) * n);
    printf("请输入权值:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    sort(&a[0], n);
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");

    for (k = 0; k < n - 1; k++) {
        int min1 = 999, min2 = 999, s1, s2;
        for (i = 0; i < n; i++) {
            if (a[i] < min1) {
                min1 = a[i];
                s1 = i;
            }
        }
        for (j = 0; j < n; j++) {
            if (a[j] < min2 && s1 != j) {
                min2 = a[j];
                s2 = j;
            }
        }
        a[s1] = 999;
        a[s2] = min1 + min2;
        s1 = 0; s2 = 0;
        for (i = 0; i < n; i++) {
            if (a[i] < 999) {
                printf("%d\t", a[i]);
            }
            else {
                printf("\t");
            }
        }
        printf("\n");
    }
    free(a);
    return 0;
}