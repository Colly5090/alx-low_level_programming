#include <stdio.h>
#include <math.h>
/**
  * main - An entry point
  * Return: 0 success
  */
int main(void)
{
	long x, prime;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
		if (number % x == 0)
		{
			prime = number / x;
		}
	}

	printf("%ld\n", prime);

	return (0);
}
