#include<stdio.h>
int main()
{
	int x;
	printf(" ������x��ֵ��");
	scanf(" %d",&x);
	x=x>>64; 									/*x����64λ*/								
	printf("\n x>>64��ֵ��:%d\n",x);
	x=x>>65; 									/*x����65λ*/
	printf(" x>>65��ֵ��:%d\n",x);
    x=x>>1; 									/*x����1λ*/
	printf(" x>>1��ֵ��:%d\n",x);
    return 0;
}
