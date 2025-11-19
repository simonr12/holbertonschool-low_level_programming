#include "main.h"

/**
 * print_diagonal - print a diagonal
 *
 * @n: the length of the diagonal
 */

void print_diagonal(int n)
{
	int ligne, colonne;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (ligne = 0; ligne < n; ligne++)
		{
			for (colonne = 0; colonne < ligne; colonne++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
