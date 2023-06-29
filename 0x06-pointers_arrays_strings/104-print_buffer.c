#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that prints a buffer
 * @b: the character that points to the buffer
 * @size:size of the buffer in bytes
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int x, y, i;

	x = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (x < size)
	{
		y = size - x < 10 ? size - x : 10;
		printf("%08x: ", x);
		for (i = 0; i < 10; i++)
		{
			if (i < y)
				printf("%02x", *(b + x + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < y; i++)
		{
			int a = *(b + x + i);

			if (a < 32 || a > 132)
			{
				a = '.';
			}
			printf("%d", a);
		}
		printf("\n");
		x += 10;
	}
}
