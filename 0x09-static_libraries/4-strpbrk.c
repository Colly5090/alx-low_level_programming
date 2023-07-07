#include "main.h"

/**
 * _strpbrk - a function that searches a string for any byte
 * @s: main string to be scanned
 * @accept: string containing the character to be scanned
 * Return: character s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; *(s + x); x++)
	{
		for (y = 0; *(accept + y); y++)
		{
			if (*(s + x) == *(accept + y))
			{
				break;
			}
		}
		if (*(accept + y) != '\0')
		{
			return (s + x);
		}
	}

	return (0);
}
