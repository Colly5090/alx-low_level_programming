#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - a function that points to newly allocated memory of a given string
 * @str: the given string in memory to be pointed to
 * Return: pointer of the string
 */

char *_strdup(char *str)
{
	int x, y;
	char *arr;

	if (str == 0)
		return (NULL);
	x = 0;
	while (str[x] != '\0')
		x++;
	arr = (char *)malloc((x + 1) * sizeof(char));

	if (arr == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		arr[y] = str[y];

	return (arr);
}
