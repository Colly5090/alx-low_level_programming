#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - An entry point of the program
 * Return: 0 (Success)
 */
int main(void)
{
int n;
int lastNumber;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastNumber = n % 10;
if (lastNumber > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastNumber);
}
else if (lastNumber == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastNumber);
}
else if (lastNumber < 6 && lastNumber != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastNumber);
}
return (0);
}
