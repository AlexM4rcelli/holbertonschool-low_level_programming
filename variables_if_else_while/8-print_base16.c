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
	int letter;

	for (letter = 48; letter <= 102; letter++)
	{
		if (letter == 58)
			letter = 97;
		putchar(letter);
	}

	putchar(10);

	return (0);
}
