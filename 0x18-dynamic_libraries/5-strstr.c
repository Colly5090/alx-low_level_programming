#include "main.h"

/**
 * _strstr - function that locate a substring
 * @haystack: the string to be scanned
 * @needle: the smallest string to be searched in haystack
 * Return: character in haystacks
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
	{
		return (haystack);
	}
	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
