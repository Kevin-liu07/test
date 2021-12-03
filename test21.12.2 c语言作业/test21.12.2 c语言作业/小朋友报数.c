//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int n, m;
//	scanf("%d %d", &n, &m);
//	int* a = (int*)malloc(n*sizeof(int));
//	for (int j = 0; j < n; j++)
//	{
//		a[j] = 0;
//	}
//	int i=0, k=1,n1=n;
//	while (n > 1) {
//		loop:
//		if (a[i] == 1) {
//			i++;
//			i %= n1;
//			goto loop;
//		}
//		if (k == m) 
//		{
//			a[i] = 1;
//			k = 0;
//			n--;
//		}
//		k++;
//		i++;
//		i %= n1;
//	}
//	for (int j = 0; j < n1; j++)
//	{
//		if (a[j] == 0)printf("%d", j + 1);
//	}
//	return 0;
//}
