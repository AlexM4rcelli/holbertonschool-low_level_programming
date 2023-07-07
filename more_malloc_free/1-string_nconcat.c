# include "main.h"
# include <stdlib.h>

int getLen(char *s);
/**
 * string_nconcat - Creates space in memory for a new concated array
 * @s1: array to concat
 * @s2: array to concat
 * @n: num of bytes to concat
 * Return: pointer to the space allocated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1, len2, j, totalLen;
	char *array;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = getLen(s1);
	len2 = getLen(s2);

	if (n >= len2)
		n = len2;

	totalLen = len1 + len2;
	array = malloc(totalLen + 1);

	if (!array)
		return (NULL);

	i = 0;
	j = 0;

	while (i < totalLen - 1 && j < n)
	{
		if (i < len1)
		{
			array[i] = s1[i];
		}
		else
		{
			array[i] = s2[j];
			j++;
		}
		i++;
	}

	array[totalLen + 1] = '\0';

	return (array);
}

int
getLen(char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
