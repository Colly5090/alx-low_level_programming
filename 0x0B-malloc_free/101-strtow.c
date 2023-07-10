#include <stdlib.h>
#include "main.h"

/**
 * word_count - to count each word in a string
 * @s: strings to be counted
 * Return: number of words in string
 */

int word_count(char *s)
{
	int str = 0;
	int x = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
		{
			str = 0;
		}
		else if (str == 0)
		{
			str = 1;
			x++;
		}
	}
	return (x);
}

/**
 * strtow - function to split a string into words
 * @str: string to be split
 * Return: Null
 */

char **strtow(char *str)
{
	char **arr, *mat;
	int a, b = 0, l = 0, c = 0;
	int string, x, y;

	while (*(str + l))
		l++;
	string = word_count(str);
	if (string == 0)
		return (NULL);

	arr = malloc(sizeof(char) * (string + 1));
	if (arr == NULL)
		return (NULL);

	for (a = 0; a <= l; a++)
	{
		if (str[a] == ' ' || str[a] == '\0')
		{
			if (c)
			{
				y = a;
				mat = malloc(sizeof(char) * (c + 1));
				if (mat == NULL)
					return (NULL);
				while (x < y)
					*mat++ = str[x++];
				*mat = '\0';
				arr[b] = mat - c;
				b++;
				c = 0;
			}
		}
		else if (c++ == 0)
			x = a;
	}

	arr[b] = NULL;

	return (arr);
}
