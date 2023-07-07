#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check the number of input digits
 * @str: array strings
 * Return: 0 success
 */

int check_num(char *str)
{
	unsigned int n;

	n = 0;
	while (n < strlen(str))

	{
		if (!isdigit(str[n]))
		{
			return (0);
		}

		n++;
	}
	return (1);
}


/**
 * main - entry point to add integers
 * @argc: number of command line argument
 * @argv: array of argument passed by argc
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int n;
	int x;
	int sum = 0;

	n = 1;
	while (n < argc)
	{
		if (check_num(argv[n]))

		{
			x = atoi(argv[n]);
			sum += x;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		n++;
	}

	printf("%d\n", sum);

	return (0);
}
