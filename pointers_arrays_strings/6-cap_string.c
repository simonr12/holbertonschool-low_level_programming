#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to capitalize
 *
 * Return: a pointer to the capitaized string
 */

char *cap_string(char *str)
{
	int i = 0;
	int j;
	char separators[] = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{

		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}

		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j] && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			{
				str[i + 1] = str[i + 1] - 32;
				break;
			}
		}
		i++;
	}

	return (str);
}
