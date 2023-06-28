#include "main.h"

/**
 * _pow_recursion - return the value of x raised to the power of y.
 * @x: number to raise
 * @y: power of
 * Return: the value of raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y <= 1)
		return (x);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
