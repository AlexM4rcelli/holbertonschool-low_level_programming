#include "main.h"

/**
 * _sqrt_recursion - return the value of x raised to the power of y.
 * @x: number to raise
 * @y: power of
 * Return: the value of raised to the power of y.
 */

int _sqrt_recursion(int x)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y <= 1)
		return (x);

	return (x / (2 * _sqrt_recursion(x - 1)));
}
