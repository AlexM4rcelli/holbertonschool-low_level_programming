# include <stdarg.h>
# include "variadic_functions.h"
/**
 *
 */

int
sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	int res = 0;
	int i;

	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		res += x;
	}

	va_end(args);

	return (res);
}
