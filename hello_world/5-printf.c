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
	char str[] = "with proper grammar, but the outcome is a piece of art,"; 
	printf("%s\n", str);
	return (0);
}
