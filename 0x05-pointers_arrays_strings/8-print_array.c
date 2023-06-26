#include <stdio.h>
/**
  * print_array - The arrays to be printed.
  * @n: number of arrays
  *@a: The input of the array
  * Return: void
  */
void print_array(int *a, int n)
{
	int array;

	for (array = 0; array < n; array++)
	{
		printf("%d", a[array]);
		if (array != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}

