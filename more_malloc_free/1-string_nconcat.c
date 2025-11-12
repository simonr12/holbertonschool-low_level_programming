#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings into a new allocated buffer
 *
 * @s1: 1st string
 * @s2: 2nd string
 * @n: max number of bytes to take from s2
 *
 * Return: pointer to the newly allocated string on success
 *         NULL if memory allocation fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lens1 = 0, lens2 = 0, i, j;
	char *out;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[lens1] != '\0')
		lens1++;
	while (s2[lens2] != '\0')
		lens2++;

	if (n < lens2)
		lens2 = n;

	out = (char *)malloc(lens1 + lens2 + 1);
	if (out == NULL)
		return (NULL);

	for (i = 0; i < lens1; i++)
		out[i] = s1[i];

	for (j = 0; j < lens2; j++)
		out[i + j] = s2[j];

	out[lens1 + lens2] = '\0';

	return (out);
}
