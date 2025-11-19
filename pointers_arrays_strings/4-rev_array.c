#include "main.h"

/**
 * reverse_array - reverse the contente of an array of integer
 *
 * @a: array to reverse
 * @n: number of elements of the array
 *
 */

void reverse_array(int *a, int n)
{
	int i, buffer;

	for (i = 0; i < n / 2; i++)
	{
		buffer = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = buffer;
	}
}
