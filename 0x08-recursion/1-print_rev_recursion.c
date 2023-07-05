#include "main.h"

/**
 * _print_rev_recursion - The function that prints string in reverse
 * @s: The string to reverse
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
