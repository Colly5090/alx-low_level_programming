#include "main.h"
/**
  * puts_half - entry point to the function
  * @str: half string to print
  * Return: void
  */
void puts_half(char *str)
{
	int full_numb, x, n;

	full_numb = 0;

	while (str[full_numb] != '\0')
	{
		full_numb++;
	}

	if (full_numb % 2 == 0)
	{
		for (n = full_numb / 2; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}
	} else if (full_numb % 2)
	{
		for (x = (full_numb - 1) / 2; x < full_numb - 1; x++)
		{
			_putchar(str[x + 1]);
		}
	}
	_putchar('\n');
}
