# include "main.h"
# include <stdio.h>
# include <stdlib.h>
#include <string.h>
/**
 * _strdup - Creates space in memory for an duplicated array
 * @str: the array to duplicate
 * Return: pointer to the space allocated
 */

char *_strdup(char *str)
{
	char *array = malloc((sizeof(str) + 1) * sizeof(char));

	if (sizeof(str) == 0)
		return (NULL);

	if (!array)
		return (NULL);

	strcpy(array, str);

	return (array);
}
