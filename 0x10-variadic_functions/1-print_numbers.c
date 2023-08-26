#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 *
 * Return:
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int j;

	va_start(args, n);

	for (j = 0; j < n; j++)
	{
		int num = va_arg(args, int);

		printf("%d", num);

		if (j != n - 1)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}

		va_end(args);
	}
	printf("\n");
}
