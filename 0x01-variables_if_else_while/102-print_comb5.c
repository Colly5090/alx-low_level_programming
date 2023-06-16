#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int a;

	while (i <= 98)
	{
		a = i + 1;
		while (a <= 99)
		{
			putchar(i / 10 % 10 + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar(a / 10 % 10 + '0');
			putchar(a % 10 + '0');
			if (i == 98 && a == 99)
				putchar('\n');
			else
			{
				putchar(',');
				putchar(' ');
			}
			a++;
		}
		i++;
	}
	return (0);
}
