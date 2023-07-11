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
	char *new_name, *new_owner;

	new = malloc(sizeof(dog_t));

	if (!new)
		return (NULL);

	new_owner = _strcpy(owner);
	if (new_owner == NULL)
	{
		free(new_owner);
		free(new);
		return (NULL);
	}

	new_name = _strcpy(name);
	if (new_name == NULL)
	{
		free(new_name);
		free(new);
		return (NULL);
	}

	new->name = new_name;
	new->age = age;
	new->owner = new_owner;

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
