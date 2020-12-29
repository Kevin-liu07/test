//#include<stdio.h>
//#include<math.h>
//double f(double x)
//{return (x * x - 2*x- 1);}
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



////任意偶数可以分解为两个素数之和
//#include<stdio.h>
//#include<math.h>
//int isprime(int x)
//{
//	int i;
//	for (i = 2; i <= sqrt(x); i++)
//	{if (x % i == 0){return 0;}}
//	return 1;
//}
//
//int main()
//{
//	int x, i,num=1;
//	scanf_s("%d", &x);
//	for (i = 3; i <= x / 2; i += 2)
//	{
//		if (isprime(i) == 1 && isprime(x - i) == 1)
//		{
//			printf("%d=%d+%d   %d\n", x, i, x - i,num);
//			num++;
//		}
//	}
//	return 0;
//}


