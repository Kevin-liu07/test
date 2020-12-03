#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);//scanf是C语言提供的
//	sum = num1 + num2;            //scanf_s表示标准C语言，vs编译器提供的，其他编译器无法识别
//	printf("sum = %d\n", sum);
//	return 0;
//}



//int main()
//{
//  3;//第一种常量--字面常量

	//const int n = 10;//n是变量，但是又有常属性，所以我们说n是常变量
	//int arr[10] = { 0 };
     
	//const--常属性
	//第二种常量--const修饰的常变量
	//const int num = 4;
	//printf("%d\n", num);

	
//	return 0;
//}


//第三种常量--define 定义的标识符常量
//#define MAX 10

//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	return 0;
//}

//第四种常量--枚举常量
//枚举--一一列举
//性别：男 女  保密
//三原色：红 黄 蓝
//星期;1 2 3 4 5 6 7

//枚举关键--enum
///enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum Sex s = FEMALE;
//	printf("%d\n",MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2

//	return 0;
//}

//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};

//int main()
//{
//	enum Color color = BLUE;
//	color = YELLOW;
//	return 0;
//}


//int main()
//{
//	数据在计算机上储存的时候，储存的是二进制
//    a--97   A-65 ....
//	ASCII 编码
//	ASCII码值
//	char a[] = "abc";//数组
//	//"abc"--'a' 'b' 'c' '\0'--'\0'字符串的结束标志    \0是隐藏的
//	char b[] = { 'a', 'b', 'c','\0'};
//	printf("%s\n", a);
//	printf("%s\n", b);
//	return 0；
//}

//int main()
//{
//	//printf("%d\n",strlen("asaad\tsd55\tsa") );
//	printf("%c\n",'\x61');
//}


//int main()
//{
//	int input = 0;
//	printf("加入中石大\n");
//	printf("好好学习?(1/0)>: ");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("hao offer");
//	else 
//		printf("卖红薯\n");
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line <= 20005)
//	{
//		printf("敲一行代码 %d\n", line);
//		line++;
//	}
//		if (line >= 20000)
//			printf("好offer\n");
//	return 0;
//}


//
//int add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0, sun = 0;
//	int a = 100;
//	int b = 200;
//	//sum = num1 + num2;       
//	sun = add(num1, num2);
//	//sum = a + b;
//	sum = add(a, b);
//	printf("sum = %d\n", sum);
//	printf("sun = %d\n", sun);
//	return 0;
//}

//库函数 系统自带的函数
//自定义函数  自己写的函数


int main()
{
	/*int a = 1;
	int b = 2;
	int c = 3;
	......*/
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放十个整数数字的数组
	       //下标（0,1,2,3,4,5,6,7,8，9）
	
	//char ch[20];
	//float arr2[5];
	//printf("%d\n", arr[4]);  //arr[下标]
	int i = 0;
	while (i <= 9)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return 0;
}





