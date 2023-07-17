#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialized the variable of the type struct dog
 * @d: pointer to the variable
 * @name: pointer to the name variable
 * @age: age variable
 * @owner: owner variable
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
