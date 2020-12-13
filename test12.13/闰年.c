#include<stdio.h>

int main()
{
	int y;
	scanf("%d", &y);
	if (y % 4 == 0)
	{
		if (y % 100 == 0)
		{

			if (y % 400 == 0)
			{
				printf("%d是闰年\n", y);
			}
			else printf("%d不是闰年\n", y);
		}
		else printf("%d是闰年\n", y);
	}
	else
		printf("%d不是闰年\n", y);
	return 0;
}