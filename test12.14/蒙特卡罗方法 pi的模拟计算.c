#include<stdlib.h>
#include<time.h>
#define N 10000000

int main()
{
	srand((unsigned)time(NULL));
	int i, num = 0; double x, y, pi;
	for (i = 1; i <= N; i++)
	{
		x = (double)rand() / RAND_MAX; y = (double)rand() / RAND_MAX;
		if (x*x + y*y <= 1){ num++; }
	}
	pi = 4.0*num / N;
	printf("\n%lf\n", pi);
}