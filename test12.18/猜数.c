//猜数
#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main(int argc, char *argv[]) {
	srand((unsigned)time(NULL));
	int x, a, b, y;
	printf("Please input the range:");
	scanf("%d %d", &a, &b);//输入数字的范围 
	x = rand() % (b - a + 1) + a;//表示电脑想的数字在 [a,b]之间 
	printf("Computer:I have got a number betweed %d and %d\n", a, b);
	printf("Computer:Please make your guess:");
	while (1)
	{
		scanf("%d", &y);
		if (y == x)
		{
			printf("Computer:Congratulation！! you got the right answer, which is %d", x);
			break;//这里因为猜对了 退出循环 
		}
		else if (y>x)
		{
			printf("Computer:Sorry! the number you guessed is bigger than the number i thought, please try again:");//猜的数字比电脑想的大 重新猜 
		}
		else if (y<x)
		{
			printf("Computer:Sorry!the number you guessed is smaller than the number i thought, please try again:");//猜的数字比电脑想的小 重新猜 
		}
	}
	return 0;
}