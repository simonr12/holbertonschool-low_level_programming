#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 *
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *str, *sep = "";

	va_start(ap, format);

	while (format && format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' ||
		    format[i] == 'f' || format[i] == 's')
		{
			printf("%s", sep);

			if (format[i] == 'c')
				printf("%c", va_arg(ap, int));

			if (format[i] == 'i')
				printf("%d", va_arg(ap, int));

			if (format[i] == 'f')
				printf("%f", (double)va_arg(ap, double));

			if (format[i] == 's')
			{
				str = va_arg(ap, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
			}

			sep = ", ";
		}
		i++;
	}

	printf("\n");
	va_end(ap);
}
