#include <stdio.h>
left(unsigned value, int n)									/*�Զ������ƺ���*/
{
    unsigned z;
    z = (value >> (32-n)) | (value << n);						/*ѭ�����Ƶ�ʵ�ֹ���*/
    return z;
} 
int main()
{
    unsigned a;
    int n;
    printf("��������ˮ�Ƴ�ʼ��״����ʮ�����ƣ�:\n");
    scanf("%x", &a);										/*����һ���˽�����*/
    printf("��������ˮ��Ҫ��λ��λ����>0��:\n");
    scanf("%d", &n);									/*����Ҫ��λ��λ��*/
	printf("-----------------------------------\n");
    printf("    ��ˮ����λ��� %x:\n", left(a, n));					/*�����ƺ�Ľ�����*/
	printf("-----------------------------------\n");
    return 0;
}
