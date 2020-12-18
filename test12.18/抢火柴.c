#include"stdio.h"
#include"stdlib.h"

int main(int argc, char*argv[])
{

	int youfirst, totalnum = 30, getnum, computergetnum;
	do
	{
		printf("\n人机开始请按 0，玩家开始请按 1。:");
		scanf("%d", &youfirst);
	} while (youfirst != 1 && youfirst != 0);

	while (1)
	{
		if (youfirst == 1)
		{
			do{ printf("\n剩余%d根火柴  请输入:", totalnum); scanf("%d", &getnum); } while (getnum<0 || getnum>2 || totalnum<getnum);
			totalnum -= getnum;
			if (totalnum == 0){ printf("你赢了！！\n"); break; }

			if (totalnum % 3 == 0){ computergetnum = rand() % 2 + 1; }
			else{ computergetnum = totalnum % 3; }
			totalnum -= computergetnum;
			printf("人机拿走了%d根火柴 \n", computergetnum);
			if (totalnum == 0){ printf("人机胜利了！！"); break; }
		}
		else
		{
			if (totalnum % 3 == 0){ computergetnum = rand() % 2 + 1; }
			else{ computergetnum = totalnum % 3; }
			totalnum -= computergetnum;
			printf("人机拿走了%d根火柴 ", computergetnum);
			if (totalnum == 0){ printf("人机胜利了！！"); break; }
			do
			{
				printf("剩余%d根火柴，请输入:", totalnum);
				scanf("%d", &getnum);
			} while (getnum < 0 || getnum>2 || totalnum < getnum);
			totalnum -= getnum;
			if (totalnum == 0){ printf("你胜利了！！"); break; }
		}

	}
	return 0;
}