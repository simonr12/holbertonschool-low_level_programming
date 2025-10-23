#include "main.h"

/**
 * print_sign - Entry point
 *
 *@n: the variable to check
 *Returns 1 and prints + if n is greater than zero
 *Returns 0 and prints 0 if n is zero
 *Returns -1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}

	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}

	else
	{
		return (-1);
		_putchar('-');
	}
}
