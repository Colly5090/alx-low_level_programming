#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - to check the length of the string
 * @s: string to be checked
 * Return: length of the string
 */

int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	return (x);
}


/**
 * *_strcpy - to copy string from source to destination
 * @dest: destination to copy string to
 * @sour: source to copy string from
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *sour)
{
	int x;
	int lent = 0;

	while (sour[lent] != '\0')
	{
		lent++;
	}

	for (x = 0; x < lent; x++)
	{
		dest[x] = sour[x];
	}
	dest[x] = '\0';

	return (dest);
}


/**
 * new_dog - a function that creates a new dog
 * @name: first element of the dog
 * @age: second element of the dog
 * @owner: third element of the dog
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int lent1, lent2;

	lent1 = _strlen(name);
	lent2 = _strlen(owner);

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);


	newdog->name = malloc(sizeof(char) * (lent1 + 1));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->owner = malloc(sizeof(char) * (lent2 + 1));
	if (newdog->owner == NULL)
	{
		free(newdog);
		free(newdog->name);
		return (NULL);
	}
	_strcpy(newdog->name, name);
	_strcpy(newdog->owner, owner);
	newdog->age = age;

	return (newdog);
}
