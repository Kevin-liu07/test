#include<stdlib.h>
#include<time.h>
int main()
{
	srand((unsigned)time(NULL));
	int i;
	for (i = 0; i < 100; i++)
	{
		int y = rand();
		double x = (double)rand() / RAND_MAX;
		printf("%d  %lf  %d\n", y, x, RAND_MAX);
	}

}