#include <stdio.h>

int main()
{
	int max,min,num1,num2,num3;
	int array[3];

	printf("input three numbers:\n");
	scanf_s("%d",&num1);
	scanf_s("%d",&num2);
	scanf_s("%d",&num3);

	array[0] = num1;
	array[1] = num2;
	array[2] = num3;

	max = array[0];
	for (int j = 0; j < 3; j++)
	{
		if (array[j]>max)
		{
			max = array[j];
		}
	}
	printf("max=%d\n",max);
	min = array[0];
	for (int k = 0; k < 3; k++)
	{
		if (array[k]<min)
		{
			min = array[k];
		}
	}
	printf("min=%d\n",min);
}