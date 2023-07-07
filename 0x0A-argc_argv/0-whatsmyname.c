#include <stdio.h>

/**
 * main - entry of the program to print its name
 * @argc: number of command line argument
 * @argv: array of argument passed by argc
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
