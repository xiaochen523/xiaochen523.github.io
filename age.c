#include<stdio.h>
void main()
{
    unsigned result; 									/*�����޷��ű���*/
    int age1, age2;
    printf("�������һ��������:");
    scanf("%d",&age1);
    printf("������ڶ���������:");
    scanf("%d",&age2);
	printf("-*-*-*-*-*-*-*-*-*-*\n");
    printf("  age1=%d,age2=%d\n", age1, age2);
	printf("-*-*-*-*-*-*-*-*-*-*\n\n");
    result = age1&age2; 										/*����������Ľ��*/
	printf("@*@*@*@*@*@*@*@*@*@*@*@*\n");
    printf("   age1&age2=%u\n", result);
	printf("@*@*@*@*@*@*@*@*@*@*@*@*\n");
}
