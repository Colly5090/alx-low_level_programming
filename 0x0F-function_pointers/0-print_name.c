#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: an array of character of th name to print
 * @f: a function pointer that points and return the name
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
