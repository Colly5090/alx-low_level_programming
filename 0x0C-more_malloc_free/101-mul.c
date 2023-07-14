#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - a program that multiples two positive numbers
* @argc: number of arguments given
* @argv: arguments of array of pointer
* Return: 0 always success
*/

int main(int argc, char *argv[])
{
	unsigned long mult;
	int x, y;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] > 57 || argv[x][y] < 48)
			{  printf("Error\n");
			exit(98); }
		}

	}
	mult = atoi(argv[1]) *  atoi(argv[2]);
	printf("%lu\n", mult);

	return (0);
}
