#include<stdio.h>
/**
 * main - main function to execute the file
 * Return: return a specific string
 */
int main(void)
{
	/**
	 * Strings are a sequence of characters terminated with a null character \0
	 * for example, 'Hola ' => [[H][o][l][a][ ][\0]]
	 */

	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
