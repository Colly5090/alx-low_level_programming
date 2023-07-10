#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - a function that concatenates two strings
 * @s1: destination string
 * @s2: source string
 * Return: a pointer
 */

char *str_concat(char *s1, char *s2)
{
	int dest = 0;
	int sour = 0;
	char *arr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	dest = sour = 0;
	while (s1[dest] != '\0')
		dest++;
	while (s2[sour] != '\0')
		sour++;
	arr = (char *)malloc((dest + sour + 1) * sizeof(char));

	if (arr == NULL)
		return (NULL);
	dest = sour = 0;
	while (s1[dest] != '\0')
	{
		arr[dest] = s1[dest];
		dest++;
	}

	while (s2[sour] != '\0')
	{
		arr[dest] = s2[sour];
		dest++, sour++;
	}
	arr[dest] = '\0';
	return (arr);
}

