#include "main.h"

int
_strcmp(char *s1, char *s2)
{
	int len, i;

	i = 0;

	for (len = 0; s1[len] != '\0'; len++)
	{
		if (s1[len] < s2[len])
		{
			i = s1[len] - s2[len];
			break;
		}
		else if (s1[len] > s2[len])
		{
			i = s1[len] - s2[len];
			break;
		}
	}

	return (i);
}
