#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point to print number given
 * @argc: number of command line argument
 * @argv: array of argument passed by argc
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc - 1);

	return (0);
}
