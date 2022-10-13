#include <stdio.h>

int main()

{
	float a = 0, V = 0, S = 0 ;
	printf_s("Input edge length of a cube\n");

	scanf_s("%f", &a);
	if (a > 0)

		printf_s("V = %.3f, S = %.3f", a * a * a, 4 * a * a);
	else
		printf_s("Wrong Input\n");
	return 0;
}

