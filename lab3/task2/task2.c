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
		printf("a[%d] = ", i);
		while (scanf("%f", &array[i]) != 1)
		{
			printf("Wrong input, try again\n");
			rewind(stdin);
		}
	}
	
	int max=0, min=0;
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

	int p, k, d;
	if (min < max)
		p = min + 1;
	else
		p = max + 1;
	d = abs(min - max) - 1;

	for (int i = 0; i < d; i++)
	{
		for (int j = p; j < n - i; j++)
			array[j] = array[j + 1];

	}

	printf("Array: ");
	for (int i = 0; i < n-d; i++)
		printf("|%.0f| ", array[i]);

	return 0;
}