#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - This function creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: dog
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	size_t new, old, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (new = 0; name[new]; new++)
		;
	new++;
	dog->name = malloc(new * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < new; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (old = 0; owner[old]; old++)
		;
	old++;
	dog->owner = malloc(old * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < old; i++)
		dog->owner[i] = owner[i];

	return (dog);
}
