/**
 * swap_int - swaps the values of two integers
 *
 * @a: pointer to the integer to modify
 * @b: pointer to the integer to modify
 */

void swap_int(int *a, int *b)
{
	int temporaire;

	temporaire = *a;
	*a = *b;
	*b = temporaire;
}
