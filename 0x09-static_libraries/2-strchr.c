#include "main.h"

/**
 * _strchr - function that locate character in a string
 * @s: The character to be located
 * @c: The string to be scanned
 * Return: character s
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
		{
			return (&s[x]);
		}
	}
	return (0);
}
