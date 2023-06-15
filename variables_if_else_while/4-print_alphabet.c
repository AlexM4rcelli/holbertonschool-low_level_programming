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

	for (letter = 97; letter <= 122; letter++)
	{
		if (letter == 101 || letter == 113)
			letter++;
		putchar(letter);
	}
	putchar(10);

	return (0);
}
