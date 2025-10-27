#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 *
 */

void print_numbers(void)
{
	char L;

	for (L = '0'; L <= '9'; L++)
	{
		_putchar(L);
	}
	_putchar('\n');
}
