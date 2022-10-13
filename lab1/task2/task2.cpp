#include <stdio.h>
int main()
{
	float a, b, c;
	printf_s("Enter numbers separating them by space\n");
	if (scanf_s("%f %f %f", &a, &b, &c) == 3)
	{
		if (a == -b || a == -c || b == -c)
			printf_s("Numbers are mutually opposite");
		else
			printf_s("Number are not mutually opposite");
	}
	else printf_s("Wrong Input");
	return 0;
}
