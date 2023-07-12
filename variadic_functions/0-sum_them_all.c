# include <stdarg.h>
# include "variadic_functions.h"

int
sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int res = 0;
	unsigned int i, x;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);

		res += x;
	}

	va_end(args);

	return (res);
}
