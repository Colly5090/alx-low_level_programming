#include "lists.h"

/**
 * listint_len - To print length of elements of the node list_t
 * @h: all type of list_t to print
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
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
