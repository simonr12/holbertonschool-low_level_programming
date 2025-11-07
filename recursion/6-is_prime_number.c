#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 *
 * @n: the number
 *
 *Return: 1 if the input integer is a prime number
 *        otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	n = check_if_prime(n, n - 1);
	return (n);
}

/**
 * check_if_prime - helper function to check if prime
 * @n: the number to check
 * @r: the current divisor to test
 *
 * Return: 1 if n is prime
 *         0 otherwise
 */

int check_if_prime(int n, int r)
{
	if (r == 1)
		return (1);
	else if (n % r == 0)
		return (0);
	return (check_if_prime(n, r - 1));
}
