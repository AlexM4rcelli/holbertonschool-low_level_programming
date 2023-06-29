#include "main.h"

char
*_strcat(char *dest, char *src)
{
	int len, len2;

	for (len = 0; dest[len] != 0; len++)
		;

	for (len2 = 0; src[len2] != '\0'; len2++)
	{
		dest[len] = src[len2];
		len++;
	}

	return (dest);
}
