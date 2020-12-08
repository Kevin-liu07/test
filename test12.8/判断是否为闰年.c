#include <stdio.h>

int main()
{
	int y;
	printf("请输入年份\n");
	scanf_s("%d", &y);
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
	{
		printf("%d是闰年 \n", y);
	}
	else printf("%d不是闰年\n", y);
	return 0;
}
