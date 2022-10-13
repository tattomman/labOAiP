#include <stdio.h>
float pwr(float x, int y) //function for raising a number to a power
{
	float res = 1;
	for (int i = 1; i <= y; i++)
		res *= x;
	return res;
}
int main()
{
	double b, q, S = 0;
	long int n;
	printf_s("Enter b, q and n separating them by space\n");
	if (scanf_s("%lf %lf %d", &b, &q, &n) == 3 && b != 0 && q != 0 && n >= 1)
	{

		for (int i = 1; i <= n; i++) //cycle that calculates the sum of a geometric progression
		{
			S += b * pwr(q, i - 1);
		}
		printf_s("Sum of geometric progression = %.3lf", S);
	}
	else
		printf_s("Wrong Input");
	return 0;

}
