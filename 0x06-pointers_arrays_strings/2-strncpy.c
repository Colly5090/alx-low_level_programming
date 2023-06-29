#include "main.h"

/**
 * *_strncpy - function that concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: number with more bytes
 * Return: void
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;

	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
