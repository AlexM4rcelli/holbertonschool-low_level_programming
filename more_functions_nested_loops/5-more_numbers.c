#include "main.h"

/**
 * mul - Multiplies two integers
 * @a: First operand
 * @b: Second operand
 *
 * Return: Product of both operands
 */

void
more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		_putchar(i + '0');

		if (i >= 10)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
	}
}
