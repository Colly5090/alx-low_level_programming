#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point to multiply two integers
 * @argc: number of command line argument
 * @argv: array of argument passed by argc
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int calc;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		calc = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", calc);
	}
	return (0);
}

