#include "main.h"

/**
 * factorial - multiply a n number for n -1 until zero.
 * @n: number to factorize
 * Return: the result of thr multiplications
 */

int factorial(int n)
{
	int res;

	res = n;

	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);

	res = res * factorial(res - 1);

	return (res);
}
