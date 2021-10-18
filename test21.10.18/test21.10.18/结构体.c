#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct date
//{
//	int year;
//	int month;
//	int day;
//};
//int main()
//{
//	struct date today = { 2021,10,18 };
//	printf("今天的日期是%d-%d-%d", today.year, today.month, today.day);
//	return 0;
//}
struct point
{
	int x;
	int y;
};
struct point* getstruct(struct point*);
void output(struct point);
void print(const struct point* p);

int main()
{
	struct point y = { 0,0 };
	getstruct(&y);
	output(y);
	output(*getstruct(&y));
	print(getstruct(&y));
	return 0;
}
struct point* getstruct(struct point* p)
{
	scanf("%d", &p->x);
	scanf("%d", &p->y);
	return p;
}
void output(struct point p)
{
	printf("%d,%d", p.x, p.y);
}
void print(const struct point* p)
{
	printf("%d,%d", p->x, p->y);
}


/*
typedef int l;表示用l代替类型int，l和int的作用相同
typedef struct date
{
	int month;
	int day;
	int year;
} Date;
Date today == struct date today
*/