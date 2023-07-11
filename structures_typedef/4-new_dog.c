#include "dog.h"
#include <stdlib.h>

char *_strcpy(char *src);
int getlen(char *src);
/**
 * new_dog - create a new struct of type dog
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: a pointer to the new struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	char *new_name;
	char *new_owner;

	new = malloc(sizeof(dog_t));

	if (!new)
		return (NULL);

	new_name = _strcpy(name);

	if (!new_name)
	{
		free(new);
		return (NULL);
	}
	new_owner = _strcpy(owner);
	if (!new_owner)
	{
		free(new_name);
		free(new);
		return (NULL);
	}

	new->age = age;
	new->name = new_name;
	new->owner = new_owner;

	return (new);
}

char
*_strcpy(char *src)
{
	char *dest;
	int len = getlen(src);
	int i;

	dest = malloc(len + 1);
	if (!dest)
		return (NULL);

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (dest);
}

int
getlen(char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		;
	return (i);
}
