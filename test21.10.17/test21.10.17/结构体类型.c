#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

struct student
{
	char name[5];
	int grade;
};
//int main()
//{
//	struct student tom = { "tom",100 };
//	printf("%s�ĳɼ���%d", tom.name,tom.grade);
//	return 0;
//}
int main()
{
	struct student class[2] = {
								{ "Tom",99 },
								{"Alan",89}
								};
	struct student* p = class;
	for(int i=0;i<2;i++)
	{
		printf("%s�ĳɼ���%d\n", p->name, p->grade);
		p++;
	}
	return 0;
}