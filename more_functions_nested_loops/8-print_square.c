#include "main.h"

/**
 * print_square - print a diagonal
 *
 * @size: the size of the square
 */

void print_square(int size)
{
	int ligne, colonne;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	else
	{
		for (ligne = 0; ligne < size; ligne++)
		{
			for (colonne = 0; colonne < size; colonne++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
