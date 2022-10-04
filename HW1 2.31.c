#include <stdio.h>
#include <math.h>

int main()
{
	printf("number  square  cube\n");
	for (int i = 0; i < 11; i++)
	{
		printf("%d\t%.0f\t%.0f\n",i,pow(i,2),pow(i,3));
	}
}

