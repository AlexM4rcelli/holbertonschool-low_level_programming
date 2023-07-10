# include "main.h"
# include <stdlib.h>

void
*_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, l;
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	array = malloc(l);

	if (!array)
		return (NULL);

	for (i = 0; i < l; i++)
		array[i] = 0;

	return (array);
}
