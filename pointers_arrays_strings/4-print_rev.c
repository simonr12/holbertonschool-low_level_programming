#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to print
 */

void print_rev(char *s)
{
	int L = 0;

	while (s[L] != '\0')
	{
		L++;
	}

	for (L = L - 1; L >= 0; L--)
	{
		_putchar(s[L]);
	}

	_putchar('\n');
}
