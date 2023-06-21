/**
 * _strlen - return the length of a string
 * @s: the pointer of the string to count
 * Return: return a int
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}
