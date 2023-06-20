#include "main.h"

/**
 * mul - Multiplies two integers
 * @a: First operand
 * @b: Second operand
 *
 * Return: Product of both operands
 */

void
print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 52 || i == 56)
			i++;
		_putchar(i);
	}
}
