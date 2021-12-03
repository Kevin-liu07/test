#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
typedef int status;
typedef char elemtype;

#define MAXSIZE 100
typedef struct sqlist{
    int* elem;
    int length;
}sqlist;

//���Ա�ĳ�ʼ��
status InitList_sq(sqlist L) {
    L.elem = (elemtype*)malloc(MAXSIZE * sizeof(elemtype));
    if (!L.elem)exit(OVERFLOW);
    L.elem = 0;
    return OK;
}
//����
void DestroyList(sqlist L) {
    if (L.elem)free(&L);
}
//���
void ClearList(sqlist L) {
    L.length = 0;
}
//����
int GetLength(sqlist L) {
    return L.length;
}
//�Ƿ�Ϊ��
void IsEmpty(sqlist L) {
    if (L.length == 0)return 1;
    else return 0;
}
//��õ�i��Ԫ��
int GetElem(sqlist L, int i, elemtype* e) {
    if (i<1 || i>L.length)return ERROR;
    *e = L.elem[i - 1];
    return OK;
}
//����e
int LocateElem(sqlist L, elemtype e) {
    for (int i = 0; i < L.elem; i++) {
        if (L.elem[i] == e)return i + 1;
    }
    return 0;
}/*ʱ�临�Ӷȣ���ƽ��ѭ������(1+2+...+n)/n=(n+1)/2 */

//����Ԫ��
int ListInsert_sq(sqlist L, int i, int e) {
    if (i<1 || i>L.length + 1)return ERROR;
    if (L.length == MAXSIZE) {
        L.elem = realloc(L.elem, MAXSIZE +10);
    }
    for (int j = L.length; j > i-1; j--) {
        L.elem[j] = L.elem[j - 1];
    }
    L.elem[i-1] = e;
    L.length++;
    return OK;                        
}/*ʱ�临�Ӷȣ�(0+1+...+n)/(n+1)=n/2��O(n) */

//ɾ��Ԫ��
int ListDelete(sqlist l, int i, int e) {
    if (i > 1 || i > l.length)return ERROR;
    e = l.elem[i - 1];
    for (int j = i - 1; j < l.length-1; j++) {
        l.elem[j] = l.elem[j + 1];
    }
    l.length--;
    return OK;
}/*ʱ�临�Ӷȣ�(0+1+...+n-1)/n=(n-1)/2  O(n)  */

