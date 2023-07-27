#include "lists.h"

/**
 * list_len - number of elements in the list
 * @h: pointer to the element
 * Return: the list
 */
size_t list_len(const list_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}
	return (number);
}
