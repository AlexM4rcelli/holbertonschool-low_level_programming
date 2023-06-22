#include "main.h"

/**
 *_puts2 - print a string
 *@str: the string to print
 */

void
puts_half(char *str)
{
	int i, j;

	for (j = 0; str[j] != '\0'; j++)
		;

	i = j / 2;

	while (i < j)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
