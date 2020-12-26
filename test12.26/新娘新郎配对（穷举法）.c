#include<stdio.h>

int main()
{
	int x, y, z;
	for (x = 1; x <= 3; x++)
		for (y = 1; y <= 3; y++)
			for (z = 1; z <= 3; z++)
			{
		if (x != 1 && x != 3 && z != 3 && x != y&&y != z&&x != z)
		{
			printf("%d %d %d", x, y, z);
		}
			}
	return 0;
}