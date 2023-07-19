#include <stdio.h>
#include <stdlib.h>

/**
 * main - to a print its own opcode
 * @argc: input of arguments
 * @argv: an array of the arguments
 * Return: 0 Success
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
