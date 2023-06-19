 #include "main.h"
 #include <stdio.h>

 /*
  * main - Execute the program
  * Return - something
  */
void
print_alphabet_x10(void)
{
	int j;

	for (j = 1; j <= 10; j++)
	{
		int i;

		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}

		_putchar(10);
	}
}
