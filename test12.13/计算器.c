//¼ÆËãÆ÷
#include<stdio.h>
int main()
{
	double a, b, c;
	char op;
	scanf("%lf%c%lf", &a, &op, &b);
	if ('+' == op){ c = a + b; }
	else if ('-' == op){ c = a - b; }
	else if ('*' == op){ c = a*b; }
	else if ('/' == op){ c = a / b; }
	else printf("´íÎó");
	printf("%lf", c);
	return 0;
}