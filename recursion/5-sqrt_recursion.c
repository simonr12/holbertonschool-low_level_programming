#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: he number
 *
 *Return: If n dont have a natural square root the function should return -1
 */

int _sqrt_recursion(int n)
{
	int i = n;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	if (i * i == n)
		return (i);
	i = _sqrt_recursion(i - 1);
	return (-1);
}
