#ifndef _MAIN_
#define _MAIN_

# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>

typedef struct types_prints
{
	char *type;
	void (*func)(va_list args);
} func_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
