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

	for (num = 48; num < 57; num++)
	{
		int i;
		for (i = num + 1; i < 57; i++)
		{
			int j = i + 1;
			while ( j <= 57)
			{
				putchar(num);
				putchar(i);
				putchar(j);
				j++;
				
				if (num < 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(10);

	return (0);
}
