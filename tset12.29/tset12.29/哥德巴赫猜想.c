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