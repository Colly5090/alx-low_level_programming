#include <stdio.h>
/**
 * main - An entry point of the program
 * Return: 0 (Success)
 */
int main(void)
{
int digit;
for (digit = 0; digit <= 9; digit++)
{
putchar((digit % 10) + '0');
}
putchar('\n');
return (0);
}
