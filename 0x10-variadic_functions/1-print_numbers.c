#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: a char to separate the numbers
 * @n: number to be searched
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, unsigned int));

		if ((i < n - 1) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}

	va_end(args);
	printf("\n");
}
