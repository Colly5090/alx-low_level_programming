#include "main.h"
/**
  * _isdigit - an entry point to print digits
  * @c: is the character to be checked
  * Return: 1 for digits and 0 for otherwise
  */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
