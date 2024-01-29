#include "main.h"
/**
  * _strcpy - A string that copies a string into one another
  * @dest: first string
  * @src: second string
  * Return: void
  */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
