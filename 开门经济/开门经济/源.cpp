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
	printf("��Ϸ����\n����50�εĿ��Ż��ᣬ���Ž�����һ�λ��ᣬȻ�����������һ�λ���ȥ��ȡ���ź�ľ��á�\n");
	printf("���ѣ�ֻ���ȴ��Ų��ܻ�ö�Ӧ�ź�ľ���\n");
	printf("һ���������ţ�ÿ���ź�Ľ���ǲ�ȷ���ģ�ף�����\n");
	printf("0����ȡ����\n1���򿪵�һ����\n2���򿪵ڶ�����\n3���򿪵�������\n\n");
	srand((unsigned)time(NULL));
	for (i = 5; i > 0; i--)
	{
		printf("���������ѡ��\n");
		scanf_s("%d", &m);
		
		switch (m)
		{
		case 0:
			if (open)
			{
				printf("��ѡ���˾��û�ȡ�������%d\n", magic = rand() % 101);
				printf("ʣ�����Ϊ��%d\n", i-1);
				
			}
			else
			{
				printf("�㴥������Ϸ���򣬱��β����ٻ���\n");
				printf("��û�д��ţ��޷��õ��ź�Ľ�Ǯ\n");
				printf("ʣ�����Ϊ��%d\n", i );
				i++;
			}
			break;
		case 1:
			printf("����˵�һ����\n");
			printf("ʣ�����Ϊ��%d\n", i-1);
			open = true;
			break;
		case 2:
			printf("����˵ڶ�����\n");
			printf("ʣ�����Ϊ��%d\n", i-1);
			open = true;
			break;
		case 3:
			printf("����˵�������\n");
			printf("ʣ�����Ϊ��%d\n", i-1);
			open = true;
			break;
		default:
			printf("�������\n");
			printf("ʣ�����Ϊ��%d\t������������ƣ�\n", i);
			i++;
			break;
		}

		money += magic;
		
	}

	printf("���������Ϊ��%d", money);
	return 0;
}
