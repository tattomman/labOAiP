#include <stdio.h>
int main()
{
	int K = 0;
	printf_s("Enter a number and a corresponding roman numeral will be displayed\n");
	if (scanf_s("%d", &K) == 1)
	{
		switch (K)
		{
		case 1:
			printf_s("|");
			break;

		case 2:
			printf_s("||");
			break;

		case 3:
			printf_s("|||");
			break;

		case 4:
			printf_s("|V");
			break;

		case 5:
			printf_s("V");
			break;

		case 6:
			printf_s("V|");
			break;

		case 7:
			printf_s("V||");
			break;

		case 8:
			printf_s("V|||");
			break;

		case 9:
			printf_s("|X");
			break;

		case 10:
			printf_s("X");
			break;

		default: printf_s("Wrong Input");

		}
	}
	else
		printf_s("Wrong Input");
	return 0;
}