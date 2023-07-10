#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function that concatenates all strings
 * @ac: input int
 * @av: array with double pointer
 * Return: either 0 or NULL
 */

char *argstostr(int ac, char **av)
{
	char *arr;
	int x, y;
	int i = 0, j = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			j++;
	}
	j += ac;

	arr = malloc((j + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
	for (y = 0; av[x][y]; y++)
	{
		arr[i] = av[x][y];
		i++;
	}
	if (arr[i] == '\0')
	{
		arr[i++] = '\n';
	}
	}
	return (arr);
}
