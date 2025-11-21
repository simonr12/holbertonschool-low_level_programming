#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 *
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char *const format, ...)
{
	va_list ap;
	int i = 0;
	char *sep = "";
	char *str;

	va_start(ap, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", sep, va_arg(ap, int));
			sep = ", ";
			break;

		case 'i':
			printf("%s%d", sep, va_arg(ap, int));
			sep = ", ";
			break;

		case 'f':
			printf("%s%f", sep, va_arg(ap, double));
			sep = ", ";
			break;

		case 's':
			str = va_arg(ap, char *);
			if (!str) /* <-- 1 of 2 allowed ifs */
				str = "(nil)";
			printf("%s%s", sep, str);
			sep = ", ";
			break;

		default:
			break;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
