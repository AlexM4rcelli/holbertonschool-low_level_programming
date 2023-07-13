# include <stdarg.h>
# include <stdio.h>
# include "variadic_functions.h"

void
print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i, x;

	va_start(args, n);

	if (separator)
	{
		for (i = 0; i < n; i++)
		{
			x = va_arg(args, int);
			if (i == 0)
				printf("%d", x);
			else
				printf("%s%d", separator, x);
		}
	}

	va_end(args);

	printf("\n");
}
