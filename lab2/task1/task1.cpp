#include <stdio.h>
int main()
{
	double S = 0, a;
	int n = 0;
	printf_s("Enter a\n");
	if (scanf_s("%lf", &a) == 1 && a > 1)
	{

		for (float i = 1;S <= a;i++) //cycle that finds the smallest n that 1+1/2+1/3+...+1/n>a 
		{
			S += 1 / i;
			n++;
		}
		printf_s("Sum= %.3lf, n= %d", S, n);

	}
	else
		printf_s("Wrong Input");
	return 0;

}