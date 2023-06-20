#include "main.h"
/**
 * print_alphabet_x10 -  to print alphabets x10
 * Return: void
 */
void print_alphabet_x10(void);
{

char alp;
int i;
i = 0;
while (i < 10)
{
for (alp = 'a'; alp <= 'z'; alp++)
{
_putchar(alp);
}
_putchar('\n');
i++;
}

}
