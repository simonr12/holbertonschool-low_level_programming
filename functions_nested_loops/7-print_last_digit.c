#include "main.h"

/**
 * print_last_digit - prints the last digit of a numbe
 * @n: number to use
 *
 * Return: the last digit of integer n
 */

int print_last_digit(int n)
{
int lastD;
lastD = n % 10;

if (lastD > 0)
{
	lastD = -lastD;
}

else
{
return (_putchar(lastD + '0'));
return (lastD);
}
}
