#include <stdio.h>
int main()
{
	int n, S = 0, P = 1;
	printf_s("Enter n\n");
	if (scanf_s("%d", &n) == 1 && n > 1)
	{
		for (int i = 1; i <= n; i++) //cycle that calculates sum S and product P of multiples of 3, from 1 to n
		{
			if (i % 3 == 0)
			{
				S += i;
				P *= i;
			}
		}
		printf_s("Sum=%d, Product=%d", S, P);
	}
	else printf_s("Wrong Input");
	return 0;
}