#include<stdio.h>

int main()
{
	int iSignal;
	printf("the Red Light is 0,the Green Light is 1\n");
	scanf("%d",&iSignal);
	if(iSignal==1|2)
	{
		printf("the Light is Green,cars can run\n");
	}
	return 0;
 } 
