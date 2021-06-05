#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<time.h>


int main()
{
	int m, money, i;
	int magic=0;
	money = 0;
	int open = false;
	printf("游戏规则：\n你有50次的开门机会，打开门将消耗一次机会，然后可以再消耗一次机会去获取该门后的经济。\n");
	printf("提醒：只有先打开门才能获得对应门后的经济\n");
	printf("一共有三扇门，每扇门后的金额是不确定的，祝你好运\n");
	printf("0：获取经济\n1：打开第一扇门\n2：打开第二扇门\n3：打开第三扇门\n\n");
	srand((unsigned)time(NULL));
	for (i = 5; i > 0; i--)
	{
		printf("请输入你的选择：\n");
		scanf_s("%d", &m);
		
		switch (m)
		{
		case 0:
			if (open)
			{
				printf("你选择了经济获取并获得了%d\n", magic = rand() % 101);
				printf("剩余次数为：%d\n", i-1);
				
			}
			else
			{
				printf("你触犯了游戏规则，本次不减少机会\n");
				printf("你没有打开门，无法得到门后的金钱\n");
				printf("剩余次数为：%d\n", i );
				i++;
			}
			break;
		case 1:
			printf("你打开了第一扇门\n");
			printf("剩余次数为：%d\n", i-1);
			open = true;
			break;
		case 2:
			printf("你打开了第二扇门\n");
			printf("剩余次数为：%d\n", i-1);
			open = true;
			break;
		case 3:
			printf("你打开了第三扇门\n");
			printf("剩余次数为：%d\n", i-1);
			open = true;
			break;
		default:
			printf("输入错误！\n");
			printf("剩余次数为：%d\t（错误次数不计）\n", i);
			i++;
			break;
		}

		money += magic;
		
	}

	printf("获得总收益为：%d", money);
	return 0;
}
