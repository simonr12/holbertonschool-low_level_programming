#include "main.h"

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
	if (n <= 1)
		return (0);
	if (r * r > n)
		return (1);
	if (n % r == 0)
		return (check_prime(n, r + 1));
}

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
	return (check_prime(n, 2));
}
