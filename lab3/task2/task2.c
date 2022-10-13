#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
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
		printf("array[%d] = ", i);
		while (scanf("%f", &array[i]) != 1)
		{
			printf("Wrong input, try again\n");
			rewind(stdin);
		}
	}

	printf("Your array: ");
	for (int i = 0; i < n; i++)
		printf("|%.3f| ", array[i]);

	int max = 0, min = 0;
	for (int i = 1; i < n; i++)
	{
		if (array[max] < array[i])
		{
			max = i;
		}
		if (array[min] > array[i])
		{
			min = i;
		}
	}

	int min_or_max, amnt_to_be_shifted;
	if (min < max)
		min_or_max = min + 1;
	else
		min_or_max = max + 1;
	amnt_to_be_shifted = abs(min - max) - 1;

	for (int i = 0; i < amnt_to_be_shifted; i++)
	{
		for (int j = min_or_max; j < n - i; j++)
			array[j] = array[j + 1];

	}

	printf("\nModified array: ");
	for (int i = 0; i < n - amnt_to_be_shifted; i++)
		printf("|%.3f| ", array[i]);

	return 0;
}