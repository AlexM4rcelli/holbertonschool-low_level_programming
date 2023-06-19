#include "main.h"
/* betty style doc for function main goes there */
/**
 * main - main function to execute the file
 * Return: if the input is positive,negative or zero
 */
void
jack_bauer(void)
{
	int j = 0;
	int b;

	for (j = 0; j < 24; j++)
	{
		b = 0;
		while (b != 60)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar(':');
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			_putchar('\n');
			b++;
		}

	}

}
