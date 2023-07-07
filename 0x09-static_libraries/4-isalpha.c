#include "main.h"

/**
 * _isalpha - will Check if a character
 * @c: Character to be checked
 * Return: lower or upper character output 1, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
