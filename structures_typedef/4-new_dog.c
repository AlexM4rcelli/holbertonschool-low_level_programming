#include "dog.h"

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
	dog_t new;
	dog_t *p;

	new.name = name;
	new.age = age;
	new.owner = owner;
	p = &new;

	return (p);
}
