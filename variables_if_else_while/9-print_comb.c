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
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		if (num < 57)
		{
			putchar(',');
			putchar(' ');

		}
	}
}}
	putchar(10);

	return (0);
}
