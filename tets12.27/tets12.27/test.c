
//
//#include<stdio.h>
//int main()
//{
//	int u[100], i;
//	u[0] = 1;
//	u[1] = 1;
//	for (i = 2; i <= 20; i++){ u[i] = u[i - 1] +u[i - 2]; }
//	for (i = 0; i <= 20; i++) printf("u[%d]=%d\n", i, u[i]);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int num[20], i;
//	for (i = 0; i < 20; i++)
//	{
//		scanf_s("%d", &num[i]);
//	}
//	int max;
//	max = num[0];
//	for (i = 0; i <= 20; i++)
//	{
//		if (max < num[i]){ max = num[i]; }
//	}
//	printf("%d", max);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i;
//	char str[10] = { 'a',' ', 'b','\0', 'c', 'd'};
//	char str2[5] = "1234";//字符串最后会有一个隐藏的“\0”，所以长度要+1.
//	char str3[] = "abcd";
//
//	printf("%s\n", str2);//字符串输出时遇到“\0”时停止输出
//
//	for (i = 0; i < 10; i++)
//		printf("%c", str[i]);//字符数组输出时全部输出
//	return 0;
//}

