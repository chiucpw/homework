#include <stdio.h>

int main()
{
	int x;
	printf("input a number:\n");
	scanf_s("%d",&x);
	if (x % 2 == 0)
	{
		printf("%d is even", x);
	}
	else
	{
		printf("%d is odd", x);
	}
}
