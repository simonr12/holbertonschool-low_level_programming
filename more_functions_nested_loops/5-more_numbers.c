#include "main.h"

/**
 * more_numbers - print 10 times numbers from 0 to 14
 *
 */

void more_numbers(void)
{
	int L;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (L = 0; L <= 14; L++)
		{
			if (L >= 10)

				_putchar('1');

			_putchar((L % 10) + '0');

		}
		_putchar('\n');
	}
}
