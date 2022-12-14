#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
float sum_of_odd(int amnt_of_elem, float array[]) //function for calculating the sum of elements with odd indices
{
	float sum_of_odd = 0;
	for (int i = 0; i < amnt_of_elem; i++)
	{
		if (i % 2 != 0)
			sum_of_odd += array[i];
	}
	printf("\nSum of odd elements = %f\n", sum_of_odd);
}
float sum_btwn_ngtv(int amnt_of_elem, float array[]) //function for calcutaing the sum of elements between first and last negative elements
{
	float sum_btwn_ngtv = 0;
	int frst_ngtv = 0, scnd_ngtv = 0;
	for (int i = 0; i < amnt_of_elem; i++)
	{
		if (array[i] < 0)
		{
			frst_ngtv = i;
			for (int j = i; j < amnt_of_elem; j++)
			{
				if (array[j] < 0)
					scnd_ngtv = j;
			}
			break;
		}
	}

	for (int i = ++frst_ngtv; i < scnd_ngtv; i++)
		sum_btwn_ngtv += array[i];
	printf("Sum of elements between first and last negative = %f\n", sum_btwn_ngtv);
}
int main()
{
	float array[100];
	int n, fill_type; //n - amount of array elements

	printf("Enter amount of values(up to 100)\n");
	while (scanf("%d", &n) != 1 || n <= 1 || n > 100 || getchar()!= '\n')
	{
		printf("Wrong input, try again\n");
		rewind(stdin);
	}

	printf("Type 1 for filling array manually, type 2 for filling with random values\n");
	while (scanf("%d", &fill_type) != 1 || (fill_type != 1 && fill_type != 2) || getchar()!= '\n')
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
			while (scanf("%f", &array[i]) != 1 || getchar() != '\n')
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
	
	sum_of_odd(n, array);
	sum_btwn_ngtv(n, array);
	
	return 0;
}

