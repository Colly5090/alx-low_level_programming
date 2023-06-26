#include "main.h"
/**
  * rev_string - The string to be reversed
  * @s: string to be reversed
  * Return: void
  */
void rev_string(char *s)
{
	int x, y, z;
	char tmp;

	for (x = 0; s[x] != '\0'; x++)
	;
	y = 0;
	z = x / 2;

	while (z--)
	{
		tmp = s[x - y - 1];
		s[x - y - 1] = s[y];
		s[y] = tmp;
		y++;
	}

}
