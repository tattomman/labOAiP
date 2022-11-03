#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(NULL));
	int rows_amnt;
	printf("Enter amount of rows for the square matrix\n");
	while (scanf("%d", &rows_amnt) != 1 || rows_amnt <= 0 || getchar() != '\n')
	{
		printf("Wrong input, try again\n");
		rewind(stdin);
	}

	int cols_amnt;
	printf("Enter amount of columns for the square matrix\n");
	while (scanf("%d", &cols_amnt) != 1 || cols_amnt != rows_amnt || getchar() != '\n')
	{
		printf("Wrong input, try again\n");
		rewind(stdin);
	}

	int fill_type, matrix[100][100];
	printf("Type 1 for manual input, type 2 for filling with random values\n");
	while (scanf("%d", &fill_type) != 1 || (fill_type != 1 && fill_type != 2) || getchar() != '\n')
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
				while (scanf("%d", &matrix[i][j]) != 1 || getchar() != '\n')
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
				matrix[i][j] = rand() % 12 - 2;
			}
		}
		break;
	}

	printf("Matrix:\n");
	for (int i = 0; i < rows_amnt; i++)
	{
		for (int j = 0; j < cols_amnt; j++)
			printf("%3d|", matrix[i][j]);
		printf("\n");
	}

	int max_elem=matrix[0][0];
	for (int i = 0; i < rows_amnt / 2; i++) //finding max element in the top left corner of square matrix
	{
		for (int j = 0; j < cols_amnt / 2; j++)
		{
			if (matrix[i][j] > max_elem)
				max_elem = matrix[i][j];
		}

	}
	printf("Max element in the top left corner of square matrix=%d",max_elem);

	getchar();
	return 0;
}