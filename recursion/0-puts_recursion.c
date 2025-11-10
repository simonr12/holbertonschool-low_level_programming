#include <stdio.h>
#include "main.h"

/**
 *  _puts_recursion - prints a string, followed by a new line
 *
 * @s: containing the string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
<<<<<<< HEAD
		putchar('\n');
		return;
	}
	putchar(*s);
=======
		_putchar('\n');
		return;
	}
	_putchar(*s);
>>>>>>> 74c1abdc9952116367b653679015866950b21f3f
	_puts_recursion(s + 1);
}
