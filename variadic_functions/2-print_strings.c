# include <stdarg.h>
# include <stdio.h>
# include "variadic_functions.h"

void
print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *x;

	va_start(args, n);

	if (separator)
	{
		for (i = 0; i < n; i++)
		{
			x = va_arg(args, char *);
			if (i == 0)
				printf("%s", x);
			else
				printf("%s%s", separator, x);
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			x = va_arg(args, char *);
			printf("%s", x);
		}
	}

	va_end(args);

	printf("\n");
}
