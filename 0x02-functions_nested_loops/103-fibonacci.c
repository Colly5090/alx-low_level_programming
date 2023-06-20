#include <stdio.h>
/**
 * main - entry point to print sum of even number < 4,000,000
 * Return: 0 success
 */
int main(void)
{
	int x = 0, y = 1, next = 0;
	int sum = 0;

	while (next < 4000000)
	{
		next = x + y;
		x = y;
		y = next;
		if (next % 2 == 0)
			sum += next;
	}
	printf("%d\n", sum);
	return (0);
}
