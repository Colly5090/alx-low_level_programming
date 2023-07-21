#include "variadic_functions.h"

/**
 * print_all - print any kind of data type
 * @format: number of arguments
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int x = 0;
	char *string, *sep = "";


	va_start(args, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					string = va_arg(args, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", sep, string);
					break;
				default:
					x++;
					continue;
			}
			sep = ", ";
			x++;
		}
	}

	va_end(args);
	printf("\n");
}
