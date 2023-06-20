#include "main.h"

void
print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 52 || i == 56)
			i++;
		_putchar(i);
	}
}
