#include <stdio.h>
/**
 * main - An entry program path
 * Return: 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %zu bytes(s)\n", sizeof(char));
	printf("Size of an int: %zu bytes(s)\n", sizeof(int));
	printf("Size of a long int: %zu bytes(s)\n", sizeof(long int));
	printf("Size of a long long: %zu byte(s)\n" sizeof(long long));
	printf("Size of a float: %zu byte(s)\n" sizeof(float));

	return (0);
}
