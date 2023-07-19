#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program to print its own opcodes
 * @argc: number of input arguments
 * @argv: an array of arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int bytes, x;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (x = 0; x < bytes; x++)
	{
		if (x == bytes - 1)
		{
			printf("%02hhx\n", array[x]);
			break;
		}
		printf("%02hhx ", array[x]);
	}
	return (0);
}
