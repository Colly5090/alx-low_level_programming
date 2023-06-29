#include "main.h"
#include <stdio.h>

/**
 * print_line - function that prints bytes of a buffer
 * @a: prints buffer
 * @s: prints bytes of buffer
 * @n: prints buffer's line
 * Return: void
 */

void print_line(char *a, int s, int n)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		if (x <= s)
			printf("%02x", a[n * 10 + x]);
		else
			printf("  ");
		if (x % 2)
			putchar(' ');
	}
	for (y = 0; y <= s; y++)
	{
		if (a[n * 10 + y] > 31 && a[n * 10 + y] < 127)
			putchar(a[n * 10 + y]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - prints a buffer
 * @b: buffer to  be printed
 * @size: size of buffer
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int a;

	for (a = 0; a <= (size - 1) / 10 && size; a++)
	{
		printf("%08x: ", a * 10);
		if (a < size / 10)
		{
			print_line(b, 9, a);
		}
		else
		{
			print_line(b, size % 10 - 1, a);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
