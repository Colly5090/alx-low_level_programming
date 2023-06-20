#include <stdio.h>

/**
 * main - Entry point of the program
 * Return:0 success.
 */
int main(void)
{
	int n;
	unsigned long x = 0, y = 1, sum;

	for (n = 0; n < 50; n++)
	{
		sum = x + y;
		printf("%lu", sum);

		x = y;
		y = sum;

		if (n == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
