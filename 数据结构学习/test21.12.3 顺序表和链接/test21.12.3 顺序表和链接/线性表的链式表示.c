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

typedef struct Lnode{
	int data;
	struct Lnode* next;
}Lnode,*listnode;		//listnode 为指向结构体Lnode的指针类型
//listnode L;//  Lnode* L;

status InitList_L(listnode L) {
	L = (listnode)malloc(sizeof(Lnode));
	L->next = NULL;
	return OK;
}

int listempty(listnode L) {
	if (L->next)
		return 0;
	else
		return 1;
}

status DestroyList_L(listnode L) {
	Lnode* p;
	while (L) {
		p = L;
		L = L->next;
		free(p);
	}
	return OK;
}

status ClearList_L(listnode L) {
	Lnode* p, * q;
	p = L->next;
	while (p != NULL) {
		p = (listnode)malloc(sizeof(Lnode));
		q = p;
		free(q);
		p = p->next;
	}
	L->next = NULL;
	return OK;
}

int ListLenth_L(listnode L) {
	Lnode* p;
	p = L->next;
	int i = 0;
	while (p != NULL) {
		i++;
		p = p->next;
	}
	return i;
}

status GetElem(listnode L,int i,int e) {
	Lnode* p;
	p = L->next;
	int j = 1;
	while (p && j < i) {
		p = p->next;
		j++;
	}
	if (!p|| j > i)return ERROR;
	e = p->data;
	return OK;
}

int LocateElem_L(listnode L,int e) {
	Lnode* p; int i = 1;
	p = L->next;
	while (p && p->data != e) {
		p = p->next;
		i++;
	}
	if (p)return i;
	else return 0;
}
status ListInsert_L(listnode L, int i, int e) {
	Lnode* p, * q;
	p = L;
	int j = 0;
	while (p && j < i-1) {
		p = p->next;
		j++;
	}
	if (!p || j > i - 1)return ERROR;
	q = (listnode)malloc(sizeof(Lnode));
	q->data = e;
	q->next = p->next;
	p->next = q;
	return OK;
}

status ListDelete(listnode L, int i, int e) {
	Lnode* p, * q;
	p = L;
	int j = 0;
	while (p->next && j < i - 1) {
		p = p->next;
		j++;
	}
	if (!(p->data) || j > i - 1)return ERROR;
	q = (listnode)malloc(sizeof(Lnode));
	q = p->next;
	p->next = q->next;
	e = q->data;
	free(q);
	return OK;
}

//头插法
void CreateList_L(listnode L, int n) {
	//逆位序输入n个元素的值
	L = (listnode)malloc(sizeof(Lnode));
	L->next = NULL;
	Lnode* p;
	int i;
	for (i = 0; i < n; i++) {
		p = (listnode)malloc(sizeof(Lnode));
		scanf("%d", &p->data);
		p->next = L->next;
		L->next = p;
	}

}

//尾插法
void CreateList_R(listnode L, int n) {
	L = (listnode)malloc(sizeof(Lnode));
	L->next = NULL;
	int i;
	Lnode* r = (listnode)malloc(sizeof(Lnode));
	r = L;
	for (i = 0; i < n; i++) {
		Lnode* p = (listnode)malloc(sizeof(Lnode));
		scanf("%d", &p->data);
		p->next = NULL;
		r->next = p;
		r = p;
	}
}

//双向链表
typedef struct Dulnode {
	struct Dulnode* prior, * next;
	int data;
}Dulnode, * Dulinklist;

int  ListInsert_DuL(Dulinklist L, int i, int e) {
	Dulnode* p, * s = (Dulinklist)malloc(sizeof(Dulnode));
	if (!(p = GetElemP_DuL(L, i)))return ERROR;
	s->data = e;
	s->next = p;
	s->prior = p->prior;
	p->prior->next = s;
	p->prior = s;
	return OK;
}

int ListDelete_DuL(Dulinklist L, int i, int e) {
	Dulnode* p;
	if (!(p = GetElemP_DuL(L, i)))return ERROR;
	p->data = e;
	p->prior->next = p->next;
	p->next->prior = p->prior;
	free(p);
	return OK;
}


