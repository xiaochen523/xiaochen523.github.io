/**
   �����Ŷӣ����տƼ�
   ����ѧԺ��վ��www.mingrisoft.com
   �ϲ��ļ�
*/
#include<stdio.h>
#include<process.h>
void main()
{
	FILE *fp1, *fp2; 						/*����һ��ָ��FILE���ͽṹ���ָ�����*/
	char ch, filename1[30], filename2[30];	/*�����ַ��������*/
	printf("�������ļ�1�����֣�\n");
	scanf("%s", filename1);				/*�����ļ�1������*/
	printf("�������ļ�2�����֣�\n");
	scanf("%s", filename2); 				/*�����ļ�2������*/
	if ((fp1 = fopen(filename1, "ab+")) == NULL)/*�ж��ļ�1�ܷ��*/
	{
		printf("���ܴ򿪣��밴���������\n");
		getchar();
		exit(0);
	}
	if ((fp2 = fopen(filename2, "rb")) == NULL) /*�ж��ļ�2�ܷ��*/
	{
		printf("���ܴ򿪣��밴���������\n");
		getchar();
		exit(0);
	}
	fseek(fp1, 0L, 2);
	while ((ch = fgetc(fp2)) != EOF)
	{
		fputc(ch, fp1);
	}
	fclose(fp1);							/*�ر��ļ�*/
	fclose(fp2);
}
