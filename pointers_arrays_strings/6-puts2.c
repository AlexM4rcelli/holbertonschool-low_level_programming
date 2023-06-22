#include "main.h"

/**
 *_puts2 - print a string
 *@str: the string to print
 */

void
puts2(char *str)
{
	int i, j;

	for (j = 0; str[j] != '\0'; j++)
		;

	i = 0;

	while (i < j)
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
