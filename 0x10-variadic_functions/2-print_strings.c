#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: the string to be printed between the strings
 * @n: umber of strings passed to the function
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int j;

	va_start(args, n);

	for (j = 0; j < n; j++)
	{
		char *str = va_arg(args, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (j != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
