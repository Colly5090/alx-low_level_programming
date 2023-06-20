#include "main.h"

/**
 * print_alphabet - an to print alphabet in lowercase
 * Return: void
*/

void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		_putchar(alp);

	_putchar('\n');
}
