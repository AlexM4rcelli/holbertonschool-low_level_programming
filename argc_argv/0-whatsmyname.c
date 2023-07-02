#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of parameters
 * @argv: An array with the parameters passed to the function
 * Description: This function prints the name of its function
 * Return: Aways zero
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	(void)argc;
	return (0);
}
