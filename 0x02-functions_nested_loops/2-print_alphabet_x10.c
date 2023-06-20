#include "main.h"

/**
 * print_alphabet_x10 - to print alphabets x10
 * Return: void
*/

void print_alphabet_x10(void)
{
	int i = 0;
	char alp;

	while (i++ <= 9)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
			_putchar(alp);
		_putchar('\n');
	}
}
