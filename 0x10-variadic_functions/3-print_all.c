#include "variadic_functions.h"

/**
 * print_all - prints anything.
 *
 * @format: a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	const char *separator = "";
	unsigned int j = 0;

	va_start(args, format);

	while (format && format[j])
	{
		if (format[j] == 'c')
		{
			printf("%s%c", separator, va_arg(args, int));
		}
		else if (format[j] == 'i')
		{
			printf("%s%d", separator, va_arg(args, int));
		}
		else if (format[j] == 'f')
		{
			printf("%s%f", separator, va_arg(args, double));
		}
		else if (format[j] == 's')
		{
			char *str = va_arg(args, char *);

			if (str == NULL)
				str = "(nil)";

			printf("%s%s", separator, str);
		}
		separator = ", ";
		j++;
	}

	printf("\n");
	va_end(args);
}
