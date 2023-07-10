#include <stdlib.h>
#include "main.h"

/**
 * create_array - A function that create an array of char
 * @size: memory block in byte
 * @c: array of characters to be printed
 * Return: pointer to allocated memory or null if fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *arr = (char *)malloc(size * sizeof(char));

	if (size == 0 || arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
