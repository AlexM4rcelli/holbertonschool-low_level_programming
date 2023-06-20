#include "main.h"

void
print_diagonal(int n)
{
	int i, j;

	for (j = 0; j < n; j++)
	{
		for (i = -j; i < n; i++)
		{
			_putchar(' ');
		}
		
		_putchar('\\');
		_putchar('\n');
	}
	
	if (n <= 0)
		_putchar('\n');
}
