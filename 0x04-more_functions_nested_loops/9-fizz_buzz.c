#include <stdio.h>
#include "main.h"

/**
 * main - Enrty point to the program
 * Return: 0 success
 */
int main(void)
{
	int x;

	for (x = 0; x <= 100; x++)
	{
		if (x % 15 == 0)
			printf("FizzBuzz");
		else if (x % 3 == 0)
			printf("Fizz");
		else if (x % 5 == 0)
			printf("Bizz");
		else
			printf("%d", i);
		if (x < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
