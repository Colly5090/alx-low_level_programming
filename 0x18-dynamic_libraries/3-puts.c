#include "main.h"
/**
  * _puts - prints a string
  * @str: string to be printed
  * Return: void
  */
void _puts(char *str)
{
	int n = 0;

	while (str[n])
	{

		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
