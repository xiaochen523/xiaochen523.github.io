#include<stdio.h>

int main()
{
	int Sum = 0;
	int Number = 1;
	do
	{
		Sum += Number;
		Number++;
	} while (Number <= 100);
	
	printf("sum=%d\n", Sum);
	return 0;
}