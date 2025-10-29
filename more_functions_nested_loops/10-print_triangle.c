#include "main.h"

/**
 * print_triangle - print a diagonal
 *
 * @size: the size of the square
 */

void print_triangle(int size)
{
	int ligne, space, hash;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (ligne = 1; ligne <= size; ligne++)
	{
		for (space = ligne; space < size; space++)
			_putchar(' ');

		for (hash = 1; hash <= ligne; hash++)
			_putchar('#');

		_putchar('\n');
	}
}
