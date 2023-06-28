#include "main.h"

/**
 * _print_rev_recursion - Write a string charcter by charcter in reverse
 * @s: String to print
 */

void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
