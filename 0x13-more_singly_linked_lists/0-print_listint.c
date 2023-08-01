#include "lists.h"

/**
 * print_listint - To print all elements of the node list_t
 * @h: all type of list_t to print
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	unsigned int number = 0;
	const listint_t *searcher;

	searcher = h;
	while (searcher)
	{
		printf("%d\n", searcher->n);
		number++;
		searcher = searcher->next;
	}
	return (number);
}
