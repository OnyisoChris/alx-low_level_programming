#include "variadic_functions.h"

/**
 * print_all - prints anything.
 *
 * @format: a list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list args;
	char *str, *separator = "";
	int j = 0;

	va_start(args, format);

	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", separator, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
						str = "(nil)";

			printf("%s%s", separator, str);
			break;
				default:
			j++;
			continue;
			}
			separator = ", ";
			j++;
		}
	}

	printf("\n");
	va_end(args);
}
