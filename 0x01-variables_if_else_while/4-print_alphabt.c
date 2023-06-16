#include <stdio.h>
/**
 * main - An entry point of the program
 * Return: 0 (Success)
 */
int main(void)
{
char alp;
for (alp = 'a'; alp <= 'z'; alp++)
{
if (alp != 'q' && alp != 'e')
putchar(alp);
}
putchar('\n');
return (0);
}
