#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int maximum(int n, float array[]) //max element of the array
{
	int max = 0;
	for (int i = 1; i < n; i++)
	{
		if (array[max] < array[i])
			max = i;
	}
	return max;
}
int minimum(int n, float array[]) //min element of the array
{
	int min = 0;
	for (int i = 1; i < n; i++)
	{
		if (array[min] > array[i])
			min = i;
	}
	return min;
}
 shifting(int min, int max, int n, float array[]) //deleting elements between min element and max element
{
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
}
int main()
{
	float array[100];
	int n, fill_type; //n - amount of array elements

	printf("Enter amount of values(up to 100)\n");
	while (scanf("%d", &n) != 1 || n <= 0 || n > 100)
	{
		printf("Wrong input, try again\n");
		rewind(stdin);
	}

	printf("Type 1 for filling array manually, type 2 for filling with random values\n");
	while (scanf("%d", &fill_type) != 1 || (fill_type != 1 && fill_type != 2))
	{
		printf("Wrong input, try again\n");
		rewind(stdin);
	}
	switch (fill_type)
	{
	case 1:
		printf("Array will be filled manually\n");
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
		break;
	case 2:
		printf("Array will be filled with random values\n");
		for (int i = 0; i < n; i++)
			array[i] = rand() % 201 - 100;
		break;
	}

	printf("Your array: ");
	for (int i = 0; i < n; i++)
		printf("|%.3f| ", array[i]);

	int max = maximum(n, array), min = minimum(n, array);
	printf("\nIndex of min element: %d, index of max element: %d", min, max);
	shifting(min, max, n, array);

	return 0;
}