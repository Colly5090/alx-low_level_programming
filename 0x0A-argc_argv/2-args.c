#include <stdio.h>

/**
 * main - entry point to print number given
 * @argc: number of command line argument
 * @argv: array of argument passed by argc
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i;

	(void)argv;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
