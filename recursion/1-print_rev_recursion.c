#include <stdio.h>
#include "main.h"

/**
 *  _print_rev_recursion -  prints a string in reverse
 *
 * @s: contain the string
 *
 *  Return: the string in reverse
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
<<<<<<< HEAD

	_print_rev_recursion(s + 1);
=======
	_print_rev_recursion(s + 1);
	_putchar(*s);
>>>>>>> 74c1abdc9952116367b653679015866950b21f3f
}
