# include "main.h"
# include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates space in memory for an array
 * @size: the size of the array
 * @c: character to initilize the array
 * Return: pointer to the space allocated
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	if (!array)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
