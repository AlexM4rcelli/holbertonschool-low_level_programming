#include "main.h"
int calculate(int n, int root);
/**
 * _sqrt_recursion - return the value of the natural square root of a number
 * @x: number to get the square root
 * Return: the square root of x
 */

int _sqrt_recursion(int x)
{
	if (x <= 0)
		return (-1);
	else
		return (calculate(x, 1));
}

int
calculate(int n, int root)
{
	if (root * root > n)
		return (-1);
	else if (root * root == n)
		return (root);
	else
		return (calculate(n, root + 1));
}
