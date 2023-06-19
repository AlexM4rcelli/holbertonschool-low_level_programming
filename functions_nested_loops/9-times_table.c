#include "main.h"
/* betty style doc for function main goes there */
/**
 * main - main function to execute the file
 * Return: if the input is positive,negative or zero
 */
void
times_table(void)
{
	int j = 0;
	int b;

	for (j = 0; j < 10; j++)
	{
		b = 0;

		while (b < 10)
		{
			int r = b * j;
			if (r => 10)
			{
				_putchar((r / 10) + '0');
				_putchar((r % 10) + '0');
			} else
			{
				_putchar(r + '0');
			}
			
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}

		_putchar('\n');
	}

}
