#include "main.h"
/**
  * _strlen - count the number of a string
  * @s: the string to count
  * Return: the counted string
  */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
