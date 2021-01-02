//#include<stdio.h>
//#include<time.h>
//int trail(int change)
//{
//	int  book[3] = { 0,0,0 };
//	int r = rand() % 3;
//	book[r] = 1;
//	//player选书
//	int hand;
//	hand = rand() % 3;
//	//主持人排除一本书
//	int open = rand() % 3;
//	while (open == hand || book[open] == 1)
//		open = rand() % 3;
//	//player决定是否换手
//	if (change == 1)
//	{
//		hand = 3 - open - hand;
//	}
//	//揭晓是否赢
//	if (book[hand] == 1)return 1;
//	else
//		return 0;
//}
//int main()
//{
//	srand((unsigned)time(NULL));
//	int changewin = 0, nochange = 0, i;
//	for (i = 1; i <= 10000; i++)
//	{
//		if (trail(1) == 1)changewin++;
//	}
//	for (i = 1; i <= 10000; i++)
//	{
//		if (trail(0) == 1)nochange++;
//	}
//	printf("%d    %d\n", nochange, changewin);
//	return 0;
//}