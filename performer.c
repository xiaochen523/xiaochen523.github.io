#include<stdio.h>
void Scrip(char* lead);                             //��������

int main()
{
	char cSelect[20] = "";                                    //�����ַ��������,�����洢
	printf("����ѡ��Ů�����ǣ�");                              //�����Ϣ��ʾ
	scanf("%s", &cSelect);                                   //�����ַ���
	Scrip(cSelect);                                            //��ʵ�ʲ������ݸ���ʽ����
	return 0;                                //�������
}
//��Ա��ʼ��������籾
void Scrip(char* lead)                                      //leadΪ��ʽ����
{
	printf("��*��*��*��*��*��*��*��*��*��*��*\n");
	printf("    %s��ʼ������������ɫ\n", lead);                     //�����ʾ�����ݾ籾
	printf("��*��*��*��*��*��*��*��*��*��*��*\n");
}
