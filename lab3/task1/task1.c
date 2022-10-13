#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	float array[100], sum_of_odd = 0, sum_btwn_ngtv = 0;
	int n; //n - amount of array elements

	printf("Enter amount of values\n");
	while (scanf("%d", &n) != 1 || n <= 0)
	{
		printf("Wrong input, try again\n");
		rewind(stdin);

	}

	printf("Enter values of elements\n");
	for (int i = 0; i < n; i++)
	{
		printf("a[%d] = ", i);
		while (scanf("%f", &array[i]) != 1)
		{
			printf("Wrong input, try again\n");
			rewind(stdin);
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (i % 2 != 0)
			sum_of_odd += array[i];
	}
	printf("Sum of odd elements = %f\n", sum_of_odd);

	int a = 0, b = 0;
	for (int i = 0; i < n; i++)
	{
		if (array[i] < 0)
		{
			a = i;
			for (int j = i; j < n; j++)
			{
				if (array[j] < 0)
					b = j;
			}
			break;
		}
	}

	for (int i = ++a; i < b; i++)
		sum_btwn_ngtv += array[i];
	printf("Sum of elements between first and last negative = %f\n", sum_btwn_ngtv);

	return 0;
}

