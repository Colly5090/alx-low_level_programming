#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * _isnumber - a function to check if number is a string
 * @s: string
 * Return: either 1 or 0
 */
int _isnumber(char *s)
{
	int x, find, n;

	n = 0, find = 1;
	for (x = 0; *(s + x) != 0; x++)
	{
		n = isdigit(*(s + x));
		if (n == 0)
		{
			find = 0;
			break;
		}
	}
	return (find);
}

/**
 * _callocX - a function to allocate memory
 * @nmemb: number of bytes
 * Return: pointer to the int
 */
char *_callocX(unsigned int nmemb)
{
	unsigned int x;
	char *arr;

	arr = malloc(nmemb + 1);
	if (arr == 0)
		return (0);
	for (x = 0; x < nmemb; x++)
		arr[x] = '0';
	arr[x] = '\0';
	return (arr);
}

/**
* main - a program that multiples two positive numbers
* @argc: number of arguments given
* @argv: arguments of array of pointer
* Return: 0 always success
*/
int main(int argc, char **argv)
{
	int x, y;
	int len1, len2;
	int ful, mult, add, ten1, ten2, i, zero = 0;
	char *array;

	if (argc != 3 || _isnumber(argv[1]) == 0 || _isnumber(argv[2]) == 0)
		printf("Error\n"), exit(98);
	if (atoi(argv[1]) == 0 || atoi(argv[2]) == 0)
		printf("0\n"), exit(0);
	len1 = strlen(argv[1]), len2 = strlen(argv[2]);
	ful = len1 + len2;
	array = _callocX(ful);
	if (array == 0)
		printf("Error\n"), exit(98);
	for (x = len2 - 1; x >= 0; x--)
	{
		ten1 = 0, ten2 = 0;
		for (y = len1 - 1; y >= 0; y--)
		{
			i = x + y + 1;
			mult = (argv[1][y] - '0') * (argv[2][x] - '0') + ten1;
			ten1 =  mult / 10;
			add = (array[i] - '0') + (mult % 10) + ten2;
			ten2 = add / 10;
			array[i] = (add % 10) + '0';
		}
		array[i - 1] = (ten1 + ten2) + '0';
	}
	if (array[0] == '0')
		zero = 1;
	for (; zero < ful; zero++)
		printf("%c", array[zero]);
	printf("\n");
	free(array);
	return (0);
}
