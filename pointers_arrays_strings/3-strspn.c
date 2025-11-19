#include "main.h"
#include <stddef.h>

/**
 * _strspn - get the lenghth of a prefix string
 * @s: string to search
 * @accept: accepted characters
 *
 * Return: the lenght of prefix
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		k = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k = 1;
				break;
			}
		}

		if (!k)
			return (i);
	}

	return (i);
}
