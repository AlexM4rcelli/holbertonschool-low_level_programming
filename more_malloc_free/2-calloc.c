# include "main.h"
# include <stdlib.h>

void
*_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);

	char *array = malloc(nmemb * size);

	if (!array)
		return (NULL);
	unsigned int i;

	for (i = 0; i < nmemb; i++)
		array[i] = 0;

	return (array);
}
