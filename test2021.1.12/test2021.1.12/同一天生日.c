//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	srand((unsigned)time(NULL));
//	int Stu[366]; int NofS;
//	for (NofS = 10; NofS <= 80; NofS++)//��ʮ��ͬѧ��80��ͬѧ
//	{
//		int t, count = 0;
//		for (t = 1; t <= 100000; t++)//����t��
//		{
//			int x;
//			for (x = 1; x <= NofS; x++)
//			{
//				Stu[x] = rand() % 365 + 1;//��xλͬѧ������Ϊ..��365��һ�����
//			}
//			if (HSB(Stu, NofS) == 1)count++;
//		}
//		printf("\nNofS = %d  p=%lf", NofS, (double)count / t);
//	}
//	return 0;
//}
//int  HSB(int Stu[], int n)//��������ͬ����ʱ����ֵ1
//{
//	int i, j;
//	for (i = 1; i <= n - 1; i++)
//		for (j = i + 1; j <= n; j++)
//			if (Stu[i] == Stu[j])
//				return 1;
//}