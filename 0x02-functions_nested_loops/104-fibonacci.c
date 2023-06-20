#include <stdio.h>
/**
 * main - entry point to print first 98 Fibonacci numbers
 * Return: 0 success
 */
int main(void)
{
	int counter, overflow;
	unsigned long x = 1;
	unsigned long y = 1;
	unsigned long sum = 0;
	long x_head, x_tail, y_head, y_tail, sum_head, sum_tail;

	printf("1");

	for (counter = 2; counter < 93; counter++)
	{
		sum = x + y;
		x = y;
		y = sum;
		printf(", %lu", sum);
	}

	x_head = x / 1000000000;
	x_tail = x % 1000000000;
	y_head = y / 1000000000;
	y_tail = y % 1000000000;

	for (; counter < 99; counter++)
	{
		overflow = (x_tail + y_tail) / 1000000000;
		sum_tail = (x_tail + y_tail) - (1000000000 * overflow);
		sum_head = (x_head + y_head) + overflow;

		printf(", %lu%lu", sum_head, sum_tail);

		x_head = y_head;
		x_tail = y_tail;
		y_head = sum_head;
		y_tail = sum_tail;
	}
	printf("\n");
	return (0);
}
