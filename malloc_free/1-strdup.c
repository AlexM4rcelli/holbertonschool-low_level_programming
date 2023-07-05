# include "main.h"
# include <stdlib.h>
/**
 * _strdup - Creates space in memory for an duplicated array
 * @str: the array to duplicate
 * Return: pointer to the space allocated
 */

char *_strdup(char *str)
{
	int i, lenStr;
	char *array;

	for (lenStr = 0; str[lenStr] != '\0'; lenStr++)
		;

	array = malloc(lenStr + 1);

	if (!str || !array)
		return (NULL);

	for (i = 0; i < lenStr; i++)
		array[i] = str[i];

	array[lenStr] = '\0';

	return (array);
}
