#include "main.h"

/**
 * _strchr - function that locate character in a string
 * @s: The character to be located
 * @c: The string to be scanned
 * Return: character s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == '\0')
	{
		return (s);
	}
	else
		return (0);
}
