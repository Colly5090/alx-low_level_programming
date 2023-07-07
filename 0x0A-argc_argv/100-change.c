#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point that print minimum of change coin
 * @argc: number of command line arguments
 * @argv: array of arguments to be passed
 * Return: 0 success, 1 Error
 */

int main(int argc, char *argv[])
{
	int n, x; 
	int total;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	total = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (x = 0; x < 5 && n >= 0; x++)
	{
		while (n >= coins[x])
		{
			total++;
			n -= coins[x];
		}
	}

	printf("%d\n", total);
	return (0);
}
