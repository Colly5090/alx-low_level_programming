#include "variadic_functions.h"

/**
 * print_strings - to print strings
 * @separator: a character to separate the strings
 * @n: number of strings passed
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	const char *string;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(args, const char*);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}

		if ((i < n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(args);
	printf("\n");
}



