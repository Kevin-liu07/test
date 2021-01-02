//#include<stdio.h>
//int count = 1;
//void move(char a, char c)
//{
//	printf("\n%c->%c   %d", a, c, count);
//	count++;
//}
//void hnt(int n, char a, char b, char c)
//{
//	if (n == 1)move(a, c);
//	else
//	{
//		hnt(n - 1, a, c, b);
//		move(a, c);
//		hnt(n - 1, b, a, c);
//	}
//}
//int main()
//{
//	hnt(8, 'a', 'b', 'c');
//	return 0;
//}