#include "main.h"

/**
 * rot13 - function that encodes string using rot13
 * @n: number to be modified
 *
 * Return: character
 */

char *rot13(char *n)
{
	int x, y;
	char input[] =
"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] =
"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
		{
			if (n[x] == input[y])
			{
				n[x] = output[y];
				break;
			}
		}
	}
	return (n);
}
