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

	for (lenStr = 0; str[lenStr] != '\0'; lenStr++)
		;

	char *array = malloc(lenStr);

	if (sizeof(str) == 0 || !array)
		return (NULL);

	for (i = 0; i < lenStr; i++)
		array[i] = str[i];

	array[lenStr] = '\0';

	return (array);
}
