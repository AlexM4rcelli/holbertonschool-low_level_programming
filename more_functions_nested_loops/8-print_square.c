#include "main.h"

void
print_square(int n)
{
	int i, j;

	for (j = 0; j < n; j++)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}
