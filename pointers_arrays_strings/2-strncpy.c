#include "main.h"

char
*_strncpy(char *dest, char *src, int n)
{
	int len2;

	for (len2 = 0; src[len2] != '\0'; len2++)
	{
		if (len2 < n)
		{
			dest[len2] = src[len2];
		}
	}

	return (dest);
}
