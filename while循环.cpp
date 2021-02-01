#include<stdio.h>

int main()
{
	int Sum = 0;
	int Number = 1;
		while (Number <= 100)
	{
			Sum += Number;
			Number++;
	}
	printf("sum=%d\n", Sum);
	return 0;
}