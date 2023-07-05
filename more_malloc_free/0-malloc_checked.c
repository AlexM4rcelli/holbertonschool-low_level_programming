#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocating with malloc
 * @b: Amount of bytes that need to be allocated
 * Return: a pointer to a void
 */

void *malloc_checked(unsigned int b)
{
	void *address;

	address = malloc(b);

	if (address == NULL)
		exit(98);

	return (address);
}
