#include "main.h"

/**
 * _islower - will Check if a character is lowercase
 * @c: Character to be checked
 * Return: lower character output 1 or 0 for otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
