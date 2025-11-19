#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int i, L = 0;
	char temporaire;

	while (s[L] != '\0')
	{
		L++;
	}

	for (i = 0; i < L / 2; i++)
	{
		temporaire = s[i];
		s[i] = s[L - i - 1];
		s[L - i - 1] = temporaire;
	}
}
