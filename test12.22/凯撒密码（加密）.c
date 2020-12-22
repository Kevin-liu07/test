#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int k;
	char c, p;
	printf("加密\n");
	printf("输入转换单位,正数右移,负数左移\n");
	scanf("%d", &k);
	scanf("%c", &p);
	printf("输入原文（英文）\n");
	do
	{
		scanf("%c", &p);
		if (p == '\n')break;
		c = p;
		c = 'a' + (p - 'a' + k) % 26;
		printf("%c", c);
	} while (1);
	return 0;
}