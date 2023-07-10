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
		if s[i] == ''
			str = 0;
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

