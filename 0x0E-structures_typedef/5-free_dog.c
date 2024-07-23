#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a dog structure
 * @d: pointer to struct dog to free
 *
 * Description: This function frees the memory allocated for a struct dog,
 * including the memory allocated for name and owner.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
