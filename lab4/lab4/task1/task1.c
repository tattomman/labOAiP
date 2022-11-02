#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void rows(int *row_amnt)
{
	printf("Enter amount of rows\n");
	while (scanf("%d", &row_amnt) != 1 || row_amnt <= 0) 
	{
		printf("Wrong input, try again\n");
		rewind(stdin);
	}
}
void cols(int *col_amnt)
{
	int col_amnt;
	printf("Enter amount of columns\n");
	while (scanf("%d", &col_amnt) != 1 || col_amnt <= 0)
	{
		printf("Wrong input, try again\n");
		rewind(stdin);
	}
}
void matrix_creating(int *matrix, int *row_amnt, int *col_amnt)
{
	int fill_type;
	printf("Type 1 for manual input, type 2 for filling with random values\n");
	while (scanf("%d", &fill_type) != 1 || (fill_type !=1 && fill_type != 2))
	{
		printf("Wrong input, try again\n");
		rewind(stdin);
	}
	switch (fill_type)
	{
	case 1:
		printf("Manual input.");
		for (int i = 0; i < row_amnt; i++)
		{
			for (int j = 0; j < col_amnt; j++)
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
		for (int i = 0; i < row_amnt; i++)
		{
			for (int j = 0; j < col_amnt; j++)
			{
				matrix[i][j] = rand() % 11 + 0;
			}
		}
		break;
	}
}
int matrix_output(int matrix)
{
	int rows_amnt = rows(), cols_amnt = cols();
	for (int i = 0; i < rows_amnt; i++)
	{
		for (int j = 0; j < cols_amnt; j++)
			printf("\nmatrix[%d][%d]=%d ", i, j, matrix[i][j]);
	}
}
void main()
{
	int row_amnt, col_amnt, matrix[100][100];
	rows();
	cols();
	matrix_creating();
	matrix_output(matrix);
	
}