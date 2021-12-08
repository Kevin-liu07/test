#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define OVERFLOW -2
#define OK 1
#define ERROR -1
#define STACK_INIT_SIZE 100
#define STACKINCREAMENT 10
typedef struct {
	int* base;
	int* top;
	int stacksize;
}Sqstack;

int Initstack(Sqstack s) {
	s.base = (int*)malloc(sizeof(int));
	if (!s.base)exit(OVERFLOW);
	s.top = s.base;
	s.stacksize = STACK_INIT_SIZE;
	return OK;
}

int StackEmpty(Sqstack s) {
	return(s.top == s.base);
}

int Push(Sqstack s, int e) {
	if (s.top - s.base >= s.stacksize) {
		s.base = (int*)realloc(s.base, (STACK_INIT_SIZE + STACKINCREAMENT) * sizeof(int));
		if (!s.base)exit(OVERFLOW);
		s.top = s.base + s.stacksize;
		s.stacksize += STACKINCREAMENT;
	}
	*s.top= e;
	s.top++;
	return OK;
}

int Pop(Sqstack s, int e) {
	if (s.top == s.base)return ERROR;
	e = *--s.top;
	return OK;
}

int GetTop(Sqstack s, int e) {
	if (s.top == s.base)return ERROR;
	e = *(s.top - 1);
	return OK;
}

//ÊýÖÆ×ª»»
void conversion() {
	Sqstack s;
	Initstack(s);
	int n;
	scanf("%d", &n);
	while (n) {
		Push(s, n % 8);
		n /= 8;
	}
	int e;
	while (!StackEmpty(s))
	{
		Pop(s, e);
		printf("%d", e);
	}
}



