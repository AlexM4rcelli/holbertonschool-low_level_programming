# include "function_pointers.h"

void
array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		long unsigned int i;

		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
