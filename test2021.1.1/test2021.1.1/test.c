//#include<stdio.h>
//int a = 20;//全局变量
//void func2()
//{
//	static int i = 3;//静态局部变量
//	int k = 0;//局部变量
//	i++; k++;
//	printf("func2 i=%d,k=%d,a=%d \n", i, k, a);
//	a++;
//}
//int main()
//{
//	a = 20;
//	func2();
//	func2();
//	return 0;
//}


//随机函数rand函数
//#include <stdio.h>
//unsigned long int next = 1;
//// rand:return pseudo-random integer on 0..32767
//int rand(void)
//{
//	next = next * 1103515245 + 12345;
//	return(unsigned int)(next / 65536) % 32768;
//}
////srand:set seed for rand()
//void srand(unsigned int seed)
//{
//	next = seed;
//}
//
//int main()
//{
//	srand((unsigned)time(NULL));
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		printf("%d\n", rand());
//	}
//	return 0;
//}



//递归函数 求阶乘
//#include<stdio.h>
//int f(int n)
//{
//	if (n == 1)return 1;
//	else return f(n - 1) * n;
//}
//int main()
//{
//	printf("%d", f(15)); 
//}



//递归函数 求斐波那契数列
//int f(int n)
//{
//	int i;
//	if (n == 1 || n == 2) { return 1; }
//	else
//	{
//		i = f(n - 1) + f(n - 2);
//		return i;
//	}
//}
//#include<stdio.h>
//int main()
//{
//	printf("%d\n", f(7));
//	return 0;
//}


//求n条直线平分平面成多少区域
//#include<stdio.h>
//int f(int n)
//{
//	if (n == 1) return 2;
//	else
//		return f(n - 1) + n;
//}
//int main()
//{
//	printf("%d\n", f(4));
//	return 0;
//}



//汉诺塔