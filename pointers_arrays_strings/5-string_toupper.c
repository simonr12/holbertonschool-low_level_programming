#include "main.h"

/**
 *string_toupper - change lowercase to upercase in a string
 *
 *@str: string to change in uppercase
 *
 *Return: a pointer to the new string
 */

char *string_toupper(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (str <= 'a' && str >= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
