#include "main.h"

/**
 * _pow_recursion -  returns the value of x raised to the power of y
 *
 * @x: number
 * @y: power
 *
 * Return: If y is lower than 0, the function should return -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
<<<<<<< HEAD
		if (y == 0)
			return (1);
=======
		return (-1);
	else if (y == 0)
		return (1);
>>>>>>> 74c1abdc9952116367b653679015866950b21f3f
	return (x * _pow_recursion(x, y - 1));
}
