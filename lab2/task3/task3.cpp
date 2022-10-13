#include <stdio.h>
int fct(int n) //function for calculating the factorial of a number
{
	int res = 1;
	for (int i = 1; i <= n; i++)
		res *= i;
	return res;
}
float pwr(float x, int y) //function for rising a number to a power
{
	float res = 1;
	for (int i = 1; i <= y; i++)
		res *= x;
	return res;
}
int main()
{
	double X, S = 0;
	int N;
	printf_s("Enter X and N separating them by space\n");
	if (scanf_s("%lf %d", &X, &N) == 2 && N >= 1)
	{
		for (int I = 0; I <= N; I++) //cycle that finds the value of an expression + X – X^3/(3!) + X^5/(5!) – … + (–1)^N·X^(2·N+1)/((2·N+1)!)
			S += ((pwr(-1, I) * pwr(X, 2 * I + 1)) / (fct(2 * I + 1)));
		printf_s("Sum of expression = %lf", S);
	}
	else
		printf_s("Wrong Input");
	return 0;
}