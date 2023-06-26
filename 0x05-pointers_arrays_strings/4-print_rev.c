#include "main.h"
/**
  * print_rev - The number same as the pointer.
  * @s: string to reverse
  * Return: void
  */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);

	_putchar('\n');
}
