#ifndef _MAIN_
#define _MAIN_
# include <stdio.h>
# include <stdlib.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));

#endif