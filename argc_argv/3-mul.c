#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of parameters
 * @argv: An array with the parameters passed to the function
 * Description: This function prints the name of its function
 * Return: Aways zero
 */
int main(int argc, char *argv[])
{
	int res;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	res = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", res);
	return (0);
}
