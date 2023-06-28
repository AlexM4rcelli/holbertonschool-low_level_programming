#include "main.h"

/**
 * _strlen_recursion - count the lengt of a string charcter by charcter
 * @s: String to print
 * Return: The length of a string
 */

int _strlen_recursion(char *s)
{
	int len;

	len = 0;

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(++s);
	}

	return (len);
}
