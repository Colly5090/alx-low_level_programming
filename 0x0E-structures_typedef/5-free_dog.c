#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - entry point to free dog_t stored
 * @d: pointer to the elements of dog
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
