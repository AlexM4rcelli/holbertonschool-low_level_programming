#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: name of the person
 * @f: function what really print the name
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
