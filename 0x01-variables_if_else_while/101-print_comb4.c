#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, a, b;

	for (i = 0; i < 10; i++)
	{
		for (a = i + 1; a < 10; a++)
		{
			for (b = a + 1; b < 10; b++)
			{
			putchar(i + '0');
			putchar(a + '0');
			putchar(b + '0');
			if (i != 7 || a != 8 || b != 9)
			{
				putchar(',');
				putchar(' ');
			}
			else
				putchar('\n');
			}
		}
	}
	return (0);
}
