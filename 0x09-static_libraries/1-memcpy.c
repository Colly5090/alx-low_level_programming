#include "main.h"

/**
 * _memcpy -a function that copies two memory area
 * @dest: destination pointer of memory area
 * @src: source pointer of memory area to copy from
 * @n: number to be copied
 * Return: character dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}



