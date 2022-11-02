#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int rows_amnt;
	printf("Enter amount of rows\n");
	while (scanf("%d", &rows_amnt) != 1 || rows_amnt <= 0)
	{
		printf("Wrong input, try again\n");
		rewind(stdin);
	}

	int cols_amnt;
	printf("Enter amount of columns\n");
	while (scanf("%d", &cols_amnt) != 1 || cols_amnt <= 0)
	{
		printf("Wrong input, try again\n");
		rewind(stdin);
	}

	int fill_type, matrix[100][100];
	printf("Type 1 for manual input, type 2 for filling with random values\n");
	while (scanf("%d", &fill_type) != 1 || (fill_type != 1 && fill_type != 2))
	{
		printf("Wrong input, try again\n");
		rewind(stdin);
	}
	switch (fill_type)
	{
	case 1:
		printf("Manual input.");
		for (int i = 0; i < rows_amnt; i++)
		{
			for (int j = 0; j < cols_amnt; j++)
			{
				printf("\nmatrix[%d][%d]=", i, j);
				while (scanf("%d", &matrix[i][j]) != 1)
				{
					printf("Wrong input, try again\n");
					rewind(stdin);
				}
			}

		}
		break;
	case 2:
		printf("Filling with random values\n");
		for (int i = 0; i < rows_amnt; i++)
		{
			for (int j = 0; j < cols_amnt; j++)
			{
				matrix[i][j] = rand() % 11 + 0;
			}
		}
		break;
	}

	for (int i = 0; i < rows_amnt; i++)
	{
		for (int j = 0; j < cols_amnt; j++)
			printf("matrix[%d][%d]=%d ", i, j, matrix[i][j]);
		printf("\n");
	}
}