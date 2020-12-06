#include<stdio.h>

int main()
{
	double p = 11340.0, D = 8.9 / 100, d = 5.1 / 100, V, v, w, R, r;
	R = D / 2.0;
	r = d / 2.0;
	V = 4.0 / 3.0*3.1415926*R*R*R;
	v = 4.0 / 3.0*3.1415926*r*r*r;
	w = p*(V - v);
	printf("w = %lf kg\n", w);
	return 0;
}
