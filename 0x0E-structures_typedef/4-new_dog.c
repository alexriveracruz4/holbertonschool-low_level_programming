#include "dog.h"
# include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: a new structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog2;

	if (name == NULL || owner == NULL || age < 0)
		return NULL;

	dog2 = malloc(sizeof(dog_t));
	if (dog2 == NULL)
		return (NULL);
	dog2->name = name;
	dog2->age = age;
	dog2->owner = owner;

	return (dog2);
}
