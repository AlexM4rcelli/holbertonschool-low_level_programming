#include "dog.h"
#include <stdlib.h>

char *_strcpy(char *src);

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

	new = malloc(sizeof(dog_t));

	if (!new)
		return (NULL);

	if (owner == NULL)
	{
		free(new);
		return (NULL);
	}
	if (name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->name = _strcpy(name);
	new->age = age;
	new->owner = _strcpy(owner);

	return (new);
}

char
*_strcpy(char *src)
{
	int i = 0, len = 0;
	char *dest;

	while (src[i] != '\0')
	{
		len++;
		i++;
	}
	dest = malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
