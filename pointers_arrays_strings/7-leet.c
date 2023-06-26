#include "main.h"
#include <stdio.h>

char
*leet(char *c)
{
	int num[5] = {4, 3, 0, 7, 1};

	char lett[] = "aeotl";

	int len1, len2;

	for (len1 = 0; c[len1] != '\0'; len1++)
	{
		for (len2 = 0; len2 <= 4; len2++)
		{
			if (c[len1] == lett[len2] || c[len1] == (lett[len2] - 32))
			{
				c[len1] = num[len2] + 48;
			}
		}

		len2 = 0;
	}

	return (c);
}
