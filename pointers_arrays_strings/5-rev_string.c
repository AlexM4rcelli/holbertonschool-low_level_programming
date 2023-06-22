#include "main.h"

/**
 *rev_string - rev a string
 *@s: the string to print
 */

void
rev_string(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		;

	j = i - 1;
	i = 0;

	while (j != i)
	{
		char c = s[i];

		s[i] = s[j];
		s[j] = c;

		j--;
		i++;
	}

}
