#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints the second half of a string
 *
 * @str: string to print
 */

void puts_half(char *str)
{
	int lenght = 0;
	int n;

	while (str[lenght] != '\0')
		lenght++;

	if (lenght % 2 == 0)
		n = lenght / 2;
	else
		n = (lenght - 1) / 2 + 1;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
