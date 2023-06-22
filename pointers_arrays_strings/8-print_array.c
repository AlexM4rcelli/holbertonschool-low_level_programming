#include <stdio.h>
#include "main.h"

/**
 *print_array - print n elements of an int array
 *@a: array to extract elements
 *@n: numbers of element to print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n)
		{
			printf(",");
			printf(" ");
		}
	}

	printf("\n");
}
