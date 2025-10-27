#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9 exept 2 and 4
 *
 */

void print_most_numbers(void)
{
	char L;

	for (L = '0'; L <= '9'; L++)
	{
		if (L == '2' || L == '4')
		{
			continue;
		}

			_putchar(L);
	}
	_putchar('\n');
}
