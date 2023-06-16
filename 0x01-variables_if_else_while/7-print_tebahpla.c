#include <stdio.h>
/**
 * main - An entry point of the program
 * Return: 0 (Success)
 */
int main(void)
{
char alp;
for (alp = 'z'; alp >= 'a'; alp--)
{
putchar(alp);
}
putchar('\n');
return (0);
}
