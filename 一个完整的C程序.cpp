#include<stdio.h>    /*headfile*/
#define Height 10     /*���峣��*/

int calculate(int Long,int Width);
int main()
{
	int m_Long;
	int m_Width;
	int result;
	
	printf("�����볤��\n");
	scanf("%d",&m_Long);
	
	printf("��������\n");
	scanf("%d",&m_Width);
	
	result=calculate(m_Long,m_Width);
	printf("�����������ǣ�");
	printf("%d\n",result);
	return 0; 
 } 
 
 int calculate(int Long,int Width)
 {
 	int result=Long*Width*Height;
 	return result;
 }

