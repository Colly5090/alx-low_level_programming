#include "main.h"

/**
 * _strspn - function that prints length of substring
 * @s: main string to scan
 * @accept: list of characters to be scanned
 * Return: character s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				x++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (x);
			}
		}
		s++;
	}
	return (x);
}

