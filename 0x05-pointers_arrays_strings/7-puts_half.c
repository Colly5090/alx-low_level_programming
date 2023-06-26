#include "main.h"
/**
  * puts_half - The half last part of numbers
  * @str: The half numbers to check
  * Return: void
  */
void puts_half(char *str)
{
	int full_numb, half_numb;

	full_numb = 0;
	while (str[full_numb] != '\0')
		full_numb++;

	half_numb = full_numb / 2;

	if (full_numb % 2 == 1)
		full_numb++;
	while (half_numb < full_numb)
	{
		_putchar(str[half_numb]);
		half_numb++;
	}
	_putchar('\n');
}

