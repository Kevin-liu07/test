//#include<stdio.h>
//#include<math.h>
//double f(double x)
//{
//	return (x * x - 2 * x - 1);
//}
//
//double bisection(double i, double r)
//{
//	double mid;
//	if (f(i) * f(r) > 0) { printf("error"); return 0; }
//
//	while (fabs(r - i) > 0.000006)
//	{
//		mid = (r + i) / 2;
//		if (f(i) * f(mid) < 0) { r = mid; }
//		else { i = mid; }
//
//	}
//	return i;
//}
//int main()
//{
//	printf("%lf", bisection(2, 3));
//	return 0;
//}