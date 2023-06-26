#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - An entry point of the program
 * passwords for the program 101-crackme
 *
 * Return: 0 success
 */
int main(void)
{
	int passwords[100];
	int x, sum, y;

	sum = 0;	

	srand(time(NULL));

	for (x = 0; x < 100; x++)
	{
		passwords[x] = rand() % 78;
		sum += (passwords[x] + '0');
		putchar(passwords[x] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			y = 2772 - sum - '0';
			sum += y;
			putchar(y + '0');
			break;
		}
	}

	return (0);
}
