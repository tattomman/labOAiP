#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int sort(int thrd_amnt, int thrd_array[]) //func for sorting array in descending order(bubblesort)
{
	for (int i = 0; i < thrd_amnt; i++)
	{
		for (int j = 0; j < thrd_amnt; j++)
		{
			if (thrd_array[j] < thrd_array[j + 1])
			{
				int x = thrd_array[j + 1];
				thrd_array[j + 1] = thrd_array[j];
				thrd_array[j] = x;
			}
		}
	}
}
int main()
{
	int frst_array[100], scnd_array[100], thrd_array[200]; //variables for arrays
	int frst_amnt, scnd_amnt, thrd_amnt; //variables for amounts of elemnts
	int fill_type;
	printf("Enter amount of values for first array\n");
	while (scanf("%d", &frst_amnt) != 1 || frst_amnt <= 0 || getchar() != '\n')
	{
		printf("Wrong input, try again\n");
		rewind(stdin);
	}

	printf("Enter amount of values for second array\n");
	while (scanf("%d", &scnd_amnt) != 1 || scnd_amnt <= 0 || getchar() != '\n')
	{
		printf("Wrong input, try again\n");
		rewind(stdin);
	}

	printf("Type 1 for filling arrays manually, type 2 for filling with random values\n");
	while (scanf("%d", &fill_type) != 1 || (fill_type != 1 && fill_type != 2) || getchar() != '\n')
	{
		printf("Wrong input, try again\n");
		rewind(stdin);
	}
	switch (fill_type)
	{
	case 1:
		printf("Arrays will be filled manually\n");
		printf("Enter values of elements for the first array in descending order\n");
		for (int i = 0; i < frst_amnt; i++)
		{
			printf("array[%d] = ", i);
			while (scanf("%d", &frst_array[i]) != 1 || getchar() != '\n')
			{
				printf("Wrong input, try again\n");
				rewind(stdin);
			}
		}

		printf("Enter values of elements for the second array in descending order\n");
		for (int i = 0; i < scnd_amnt; i++)
		{
			printf("array[%d] = ", i);
			while (scanf("%d", &scnd_array[i]) != 1 || getchar() != '\n')
			{
				printf("Wrong input, try again\n");
				rewind(stdin);
			}
		}
		break;
	case 2:
		printf("Arrays will be filled with random values\n");
		for (int i = 0; i < frst_amnt; i++)
			frst_array[i] = rand() % 201 - 100;
		for (int i = 0; i < scnd_amnt; i++)
			scnd_array[i] = rand() % 201 - 100;
		sort(frst_amnt, frst_array);
		sort(scnd_amnt, scnd_array);
		break;
	}

	int k = 0, j = 0, i = 0; //variables for counters
	while (i <= frst_amnt && j <= scnd_amnt) //merging sorted arrays
	{
		if (frst_array[i] > scnd_array[j])
		{
			thrd_array[k] = frst_array[i];
			i++;
		}
		else
		{
			thrd_array[k] = scnd_array[j];
			j++;
		}
		k++;
	}

	thrd_amnt = frst_amnt + scnd_amnt;
	printf("Third array: ");
	for (int i = 0; i < thrd_amnt; i++)
		printf("|%d| ", thrd_array[i]);
	return 0;
}