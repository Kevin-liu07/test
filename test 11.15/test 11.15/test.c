 
//包含一个叫stdio.h的文件
//std--标准 standard  input  output 

//#include <stdio.h>

//int main()  //主函数--程序的入口--main函数有且只有一个
//{	//这里完成任务
	//在屏幕上输出hello world
	//函数-printf function - printf - 打印函数
	//库函数-C语言本省提供给我们使用的函数
	//别人的东西-打招呼
	//#include
//	printf("hello world\n");
//	return 0;
//}



//int  整型的意思 
//char  字符数据类型
//short --short int  短整形
//long  长整型
//long long  更长的整型
//float  单精度浮点数
//double  双精度浮点数

//%d--打印整型
//%c--打印字符
//%f--打印浮点数字
//%p--以地址的形式打印
//%x--打印16进制数字
//%o...


//#include <stdio.h>

//char--字符类型
//int main()
//{
	//char ch = 'A';//向内存申请空间
	//printf("%c\n, ch");//%c--打印字符格式的数据
	
	//int age = 20;
	//printf("%d\n", age);//%d--打印类型十进制数据

	//long num = 100;
	//printf("%d\n", num);

	//float f = 5.0;
	//printf("%f\n",f);

	//double d = 3.14;
	//printf("%lf\n", d);

//	return 0;
//}



//#include<stdio.h>

//int main()
//{
//	printf("%d\n", sizeof(char));// 1字节        
//	printf("%d\n", sizeof(short));//2             
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	return 0;
//


//#include<stdio.h>

//int main()
//{
//	short age = 20;//向内存申请两个字节=16bit，用来存放20
//	float weight = 95.6f;//向内存申请四个字节，存放小数
	//return 0;
//


//#include<stdio.h>

//int num2 = 20;//全局变量--定义在代码块({ })之外的变量

//int main()
//{
//	int num = 10;//局部变量--定义在代码块内部

//	return 0;
//}



//#include<stdio.h>

//int a = 100;

//int main()
//{
//	int a = 10;//局部变量和全局变量建议不要相同，容易产生误会，产生bug
//	            //daunt局部变量和全局变量的名字相同时，局部变量优先
//	printf("%d\n", a);
//
//	return 0;
//}


//#include<stdio.h>

//int a = 10;
//int main()
//{
	
//	printf("%d\n", a);
//	return 0;
//}


//#include<stdio.h>

//int main()
//{
	//计算两个数的和
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
	//输入数据--使用输入函数scanf
//	scanf_s("%d%d", &num1, &num2);//取地址符号 &
	
	//c语言语法规定，变量要定义在当前代码块的前面
//	sum = num1 + num2;
//	printf("sum = %d\n",sum);
//	return 0;
//} 


//#include<stdio.h>

//int global = 2020;//全局变量

//void test()
//{
//	printf("test()-- %d\n", global);

//}
//int main()
//{
//	test();
//	printf("num = %d\n", global);
//	return 0;
//}


#include <stdio.h>

int main()
{
	//未声明的标识符
	//声明extern外部符号的
	extern int g_val;
	printf("g_val = %d\n", g_val);
	return 0;
}