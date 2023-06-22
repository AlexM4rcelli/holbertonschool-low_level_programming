#include <stdio.h>
#include "main.h"

/**
 *_strcpy - print n elements of an int array
 *@dest: array to extract elements
 *@src: numbers of element to print
 *Return: a string
 */

char *_strcpy(char *dest, char *src)
{
	int i, n;

	for (n = 0; src[n] != '\0'; n++)
		;

	for (i = 0; i < n + 1; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
