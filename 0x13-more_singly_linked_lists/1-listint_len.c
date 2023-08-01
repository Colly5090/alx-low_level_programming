#include "lists.h"

/**
 * print_listint - To print length of elements of the node list_t
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
		number++;
		searcher = searcher->next;
	}
	return (number);
}
