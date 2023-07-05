#include "main.h"

/**
 * pal1 - to obtain the strings from an input
 * @x: the input string
 * @y: the integer to be counted
 * Return: x is  success
 */

int pal1(char *x, int y)
{
	if (*x == 0)
		return (y - 1);
	return (pal1(x + 1, y + 1));
}

/**
 * pal2 - check palidome string
 * @x: the input string
 * @y: length of string
 * Return: 1 or 0 sucess
 */

int pal2(char *x, int y)
{
	if (*x != *(x + y))
		return (0);
	else if (*x == 0)
		return (1);
	return (pal2(x + 1, y - 2));
}

/**
 * is_palindrome - to write a palidome number
 * @s: number of palidome inputs
 * Return: integer s
 */

int is_palindrome(char *s)
{
	int y;

	y = pal1(s, 0);
	return (pal2(s, y));
}
