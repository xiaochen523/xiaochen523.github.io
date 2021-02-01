#include<stdio.h>

int main()
{
	char iGrade;

	printf("请输入分数：\n");
	scanf_s("%c",&iGrade);
	printf("你的分数是\n");
		switch (iGrade)
		{
		case 'A':
				printf("90-100，继续保持哦\n");
					break;
		case 'B':
						printf("80-90，还不错哦，继续努力吧\n");
					break;
		case 'C':
						printf("70-80，还有待加强哦\n");
					break;
		case 'D':
						printf("60-70，继续努力吧\n");
					break;
		case 'E':
						printf("50-60，考的不是很理想呢，加油！！\n");
					break;
		case 'F':
						printf("50以下，要反思一下哦，争取下次取得好成绩\n");
					break;
		default:
					printf("成绩输入错误，请更正！！！\n");
				break;
		}

	return 0;
}