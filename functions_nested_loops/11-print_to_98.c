#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - pritn all naturals number between n and 98
 *
 * @n: the integer to check
 * Return: the result.
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{

		for (i = n; i <= 98; i++)
		{
			printf("%d", i);

			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);

			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
