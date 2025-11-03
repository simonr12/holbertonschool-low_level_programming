#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: string to search in
 * @c: character to be searched
 *
 * Return: the character
 */

char *_strchr(char *s, char c)
{
	if (c == '\0')
		return (s);

	return (NULL);

	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
}
