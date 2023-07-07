#include "main.h"
/**
  * _atoi - The initak point for integer conversion
  * @s: number to be checked
  * Return: void
  */
int _atoi(char *s)
{
	int x = 0;
	unsigned int y = 0;
	int max = 1;
	int min = 0;

	while (s[x])
	{
		if (s[x] == 45)
		{
			max *= -1;
		}

		while (s[x] >= 48 && s[x] <= 57)
		{
			min = 1;
			y = (y * 10) + (s[x] - '0');
			x++;
		}

		if (min == 1)
		{
			break;
		}

		x++;
	}

	y *= max;
	return (y);
}
