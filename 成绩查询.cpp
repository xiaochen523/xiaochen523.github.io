#include<stdio.h>

int main()
{
	char iGrade;

	printf("�����������\n");
	scanf_s("%c",&iGrade);
	printf("��ķ�����\n");
		switch (iGrade)
		{
		case 'A':
				printf("90-100����������Ŷ\n");
					break;
		case 'B':
						printf("80-90��������Ŷ������Ŭ����\n");
					break;
		case 'C':
						printf("70-80�����д���ǿŶ\n");
					break;
		case 'D':
						printf("60-70������Ŭ����\n");
					break;
		case 'E':
						printf("50-60�����Ĳ��Ǻ������أ����ͣ���\n");
					break;
		case 'F':
						printf("50���£�Ҫ��˼һ��Ŷ����ȡ�´�ȡ�úóɼ�\n");
					break;
		default:
					printf("�ɼ�������������������\n");
				break;
		}

	return 0;
}