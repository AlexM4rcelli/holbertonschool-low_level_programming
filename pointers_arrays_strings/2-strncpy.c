#include "main.h"

char
*_strncpy(char *dest, char *src, int n)
{
	int len2;

	for (len2 = 0; len2 < n && src[len2] != '\0'; len2++)
	{
		dest[len2] = src[len2];
	}

	for (; len2 < n; len2++)
		dest[len2] = '\0';

	return (dest);
}
