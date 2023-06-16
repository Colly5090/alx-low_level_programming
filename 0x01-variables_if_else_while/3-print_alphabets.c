#include <stdio.h>
/**
 * main - An entry point of the program
 * Return: 0 (Success)
 */
int main(void)
{
char alp;
char letter;
for (alp = 'a'; alp <= 'z'; alp++)
{
putchar(alp);
}
for (letter = 'A'; letter <= 'Z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
