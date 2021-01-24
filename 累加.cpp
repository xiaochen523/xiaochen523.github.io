#include<stdio.h>

int main()
{
	int iSum=0;
	int iNumber=1;
	
	while(iNumber<=100)
	{
		iSum=iSum+iNumber;
		iNumber++;
	}
	printf("the result is: %d\n",iSum);
	return 0;
}
