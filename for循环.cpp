#include<stdio.h>

int main()
{
	int Sum, N;
	for (Sum = 0, N = 1; N <= 100; N++)
	{
		Sum += N;
		printf("sum=%d\n",Sum );
	}
	return 0;
}