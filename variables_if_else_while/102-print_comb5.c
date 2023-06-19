#include <stdlib.h>
#include <time.h>

/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - main function to execute the file
 * Return: if the input is positive,negative or zero
 */
int main(void)
{
	int j = 0;
	int b;

	for (j = 0; j <= 98; j++)
	{
		b = j + 1;
	while (b != 100)
	{
		putchar((j / 10) + '0');
		putchar((j % 10) + '0');
		putchar(' ');
		putchar((b / 10) + '0');
		putchar((b % 10) + '0');
		b++;

		if (j != 98)
		{
			putchar(',');
			putchar(' ');
		}
	}

	}
	putchar(10);

	return (0);
}
