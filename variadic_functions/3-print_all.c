# include "variadic_functions.h"
# include <stdarg.h>
# include <stdio.h>

void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);

void
print_all(const char * const format, ...)
{
	va_list args;
	char *space = "";
	unsigned int i = 0, j;

	func_t types[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);
	while (format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *types[j].type)
			{
				printf("%s", space);
				types[j].func(args);
				space = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(args);

	printf("\n");
}

void
print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

void
print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

void
print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

void
print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (!str)
		str = "(nil)";

	printf("%s", str);
}
