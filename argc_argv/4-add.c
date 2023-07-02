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
	int res, i;
	unsigned long int j;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	res = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		res = res + atoi(argv[i]);
	}

	printf("%d\n", res);
	return (0);
}
