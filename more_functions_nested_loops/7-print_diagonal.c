#include "main.h"

void
print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar(' ');
	}

	if (n != 0)
		_putchar('\\');

	_putchar('\n');
}
