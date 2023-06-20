#include "main.h"

void
print_triangle(int n)
{
	int i, j, k;

	for (j = 0; j <= n; j++)
	{
		if (j != 0)
		{
			for (k = n; k > j; k--)
			{
				_putchar(' ');
			}
		}

		for (i = 0; i < j; i++)
		{

			_putchar('#');
		}

		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}
