#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
float sum_of_odd(int amt_of_elem, float array[])
{
	float sum_of_odd = 0;
	for (int i = 0; i < amt_of_elem; i++)
	{
		if (i % 2 != 0)
			sum_of_odd += array[i];
	}
	printf("\nSum of odd elements = %f\n", sum_of_odd);
}
float sum_btwn_ngtv(int amt_of_elem, float array[])
{
	float sum_btwn_ngtv = 0;
	int a = 0, b = 0;
	for (int i = 0; i < amt_of_elem; i++)
	{
		if (array[i] < 0)
		{
			a = i;
			for (int j = i; j < amt_of_elem; j++)
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
}
int main()
{
	float array[100];
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

	printf("Your array: ");
	for (int i = 0; i < n; i++)
		printf("|%.3f| ", array[i]);
	
	sum_of_odd(n, array);
	sum_btwn_ngtv(n, array);
	
	return 0;
}

