#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: destination string
 * @s2: source string
 * @n: number of strings to be concatenate
 * Return: a pointer to s1
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;

	unsigned int x = 0, y = 0;
	unsigned int dest = 0, sour = 0;

	while (s1 && s1[dest])
		dest++;
	while (s2 && s2[sour])
		sour++;

	if (n < sour)
	{
		s3 = malloc((dest + n + 1) * sizeof(char));
	}
	else
	{
		s3 = malloc((dest + sour + 1) * sizeof(char));
	}
	if (!s3)
		return (NULL);

	while (x < dest)
	{
		s3[x] = s1[x];
		x++;
	}

	while (n < sour && x < (dest + n))
		s3[x++] = s2[y++];

	while (n >= sour && x < (dest + sour))
		s3[x++] = s2[y++];

	s3[x] = '\0';

	return (s3);
}
