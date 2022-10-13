#include <stdio.h>
#include <math.h>
int main()
{
	float a, R;
	printf_s("Enter the side of the square and the radius of the circle separating them by space\n");
	if (scanf_s("%f %f", &a, &R) == 2 && a > 0 && R > 0)
	{
		if (2 * R <= a) //condition for placing a circle inside a square
			printf_s("The circle will fit in the square\n");
		else
			printf_s("The circle will not fit in the square\n");
		if (sqrt(a * a) <= 2 * R) //condition for placing a square inside a circle
			printf_s("The square will fit in the circle\n");
		else
			printf_s("The square will not fit in the circle\n");
	}
	else
		printf_s("Wrong Input");
	return 0;
}