#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (struct dog)
 *         NULL if malloc fails or any input is NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;
	int name_len = 0, owner_len = 0, i;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	while (name && name[name_len])
		name_len++;
	while (owner && owner[owner_len])
		owner_len++;

	name_copy = malloc(name_len + 1);
	owner_copy = malloc(owner_len + 1);

	if (!name_copy || !owner_copy)
	{
		free(name_copy);
		free(owner_copy);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i <= name_len; i++)
		name_copy[i] = name[i];
	for (i = 0; i <= owner_len; i++)
		owner_copy[i] = owner[i];

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
