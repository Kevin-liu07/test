//Ò»º¢°ëÕþ²ß
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i, boy = 0, girl = 0;
	srand((unsigned)time(NULL));
	for (i = 1; i <= 1000000; i++)
	{
		if (rand() % 2 == 1){ boy++; }
		else
		{
			girl++;
			if (rand() % 2 == 1)boy++;
			else girl++;
		}
	}
	printf("%d  %d\n", boy, girl);
	return 0;
}