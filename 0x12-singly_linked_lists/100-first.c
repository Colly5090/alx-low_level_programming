#include "lists.h"

void calledFirst(void) __attribute__ ((constructor));

/**
 * calledFirst - to print all sentences given
 * Return: nothing
 */
void calledFirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
