#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: number of n or more bytes
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
