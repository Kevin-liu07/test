#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, d, x1, x2, i, tmp;
	scanf("%lf %lf %lf", &a, &b, &c);
	if (a == 0 && b == 0){ printf("´íÎó\n"); }
	else if (a == 0 && b != 0){ x1 = -c / b; printf("%lf\n", x1); }
	else if (a != 0)
	{
		d = b*b - 4 * a*c;
		if (d >= 0)
		{
			x1 = (-b - sqrt(d)) / (2 * a);
			x2 = (-b + sqrt(d)) / (2 * a);
			printf("%lf   %lf\n", x1, x2);
		}
		else
		{
			x1 = -b / (2 * a);
			i = sqrt(-d) / (2 * a);
			if (i < 0){ i = -i; }
			printf("%.2lf+%.2lfi   %.2lf-%.2lfi\n", x1, i, x1, i);
		}
	}
	return 0;
}