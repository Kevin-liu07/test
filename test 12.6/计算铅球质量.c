#include<stdio.h>

int main()
{
	double p = 11340, R = 8.9 / 100, v, r, w;
	r = R / 2;
	v = 4.0 / 3.0*3.1415926*r*r*r;
	w = p*v;
	printf("w = %lf kg\n", w);
	return 0;
}
