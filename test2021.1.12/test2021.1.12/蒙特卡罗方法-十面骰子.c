//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	srand((unsigned)time(NULL));
//	int i, m, count[200] = { 0 };
//	for (m = 0; m <= 1000000; m++)
//	{
//		int sum = 0;
//		for (i = 1; i <= 100; i++)
//		{
//			sum += rand() % 10 + 1;
//			if (sum > 100)break;
//		}
//		count[sum]++;//计算骰子和的次数
//		count[i]++;//计算多少次大于100
//	}
//	for (m = 0; m <= 110; m++)
//	{
//		printf("count[%d]=%d\n", m, count[m]);
//	}
//	return 0;
//}