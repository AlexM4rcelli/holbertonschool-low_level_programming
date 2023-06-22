#include "main.h"

/**
 *print_rev - print a string
 *@str: the string to print
 */

void
print_rev(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;

	for (j = i - 1; j >= 0; j--)
		_putchar(str[j]);
	
	_putchar('\n');
}
