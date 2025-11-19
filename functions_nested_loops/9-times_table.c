 #include "main.h"

/**
* times_table - prints the 9 times table, starting with 0
*
* Return - the times table
*/

void times_table(void)
{

int table, colonne, ligne;

	for (ligne = 0; ligne < 10; ligne++)
	{
		for (colonne = 0; colonne < 10; colonne++)
		{
			table = ligne * colonne;


			if (colonne != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (table < 10)
				_putchar(' ');
			}

			if (table >= 10)
			_putchar((table / 10) + '0');

		_putchar((table % 10) + '0');
		}
		_putchar('\n');

	}

}
