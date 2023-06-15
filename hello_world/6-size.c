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
        
	char charType;
	int intType;
	long int longIntType;
	long long int longlongType;
	float floatType;

	printf("Size of char: %zu byte(s)\n", sizeof(charType));
	printf("Size of int: %zu byte(s)\n", sizeof(intType));
	printf("Size of long int: %zu byte(s)\n", sizeof(longIntType));
	printf("Size of long long int: %zu byte(s)\n", sizeof(longlongType));
	printf("Size of float: %zu byte(s)\n", sizeof(floatType));

	return (0);
}
