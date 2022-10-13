#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int frst_array[100], scnd_array[100], thrd_array[200]; //variables for arrays
	int frst_amnt, scnd_amnt, k = 0; //variables for amounts of elemnts
	printf("Enter amount of values for first array\n");
	while (scanf("%d", &frst_amnt) != 1 || frst_amnt <= 0)
	{
		printf("Wrong input, try again\n");
		rewind(stdin);

	}

	printf("Enter values of elements\n");
	for (int i = 0; i < frst_amnt; i++)
	{
		printf("array[%d] = ", i);
		while (scanf("%d", &frst_array[i]) != 1)
		{
			printf("Wrong input, try again\n");
			rewind(stdin);
		}
	}

	printf("Enter amount of values for second array\n");
	while (scanf("%d", &scnd_amnt) != 1 || scnd_amnt <= 0)
	{
		printf("Wrong input, try again\n");
		rewind(stdin);

	}

	printf("Enter values of elements\n");
	for (int i = 0; i < scnd_amnt; i++)
	{
		printf("array[%d] = ", i);
		while (scanf("%d", &scnd_array[i]) != 1)
		{
			printf("Wrong input, try again\n");
			rewind(stdin);
		}
	}
	for (int i = 0; i < frst_amnt; i++) //merging arrays into one
		thrd_array[k++] = frst_array[i];
	for (int i = 0; i < scnd_amnt; i++)
		thrd_array[k++] = scnd_array[i];

	for (int i = 0; i < k;i++) //sorting array in descending order
	{
		for (int j = 0; j < k-1; j++)
		{
			if (thrd_array[j] < thrd_array[j+1])
			{
				int x = thrd_array[j+1];
				thrd_array[j + 1] = thrd_array[j];
				thrd_array[j] = x;
			}
		}
	}

	printf("Third array sorted: ");
	for (int i = 0; i < k; i++)
		printf("|%d| ", thrd_array[i]);
	return 0;
}