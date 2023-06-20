#include <stdio.h>

/**
 * main - start point that list all the natural numbers below 1024
 * Return: 0 success.
 */
int main(void)
{
	int x, sum = 0;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
			sum += x;
	}

	printf("%d\n", sum);

	return (0);
}
