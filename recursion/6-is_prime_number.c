#include "main.h"
int calculate(int n, int count);
/**
 *is_prime_number - returns 1 if a number is primer, 0 if is not.
 *@n: number to use
 *Return: 1 if is prime 0 if is not
 */
int is_prime_number(int n)
{
	return (calculate(n, n / 2));
}

int
calculate(int n, int count)
{
	if (n > 0)
	{
		if (n % count == 0 && (count != 1 || count != n))
			return (0);
		else if (n % count == 0 && count == n)
			return (1);
		else
			return (calculate(n, count + 1));
	} else
	{
		if (n % count == 0 && (count != -1 || count != n))
			return (0);
		else if (n % count == 0 && count == n)
			return (1);
		else
			return (calculate(n, count - 1));
	}
}
