#include "lists.h"

/**
 * print_list - To print list of all elements
 * @h: pointer to linked nodes
 * Return: list_h
 */

size_t print_list(const list_t *h)
{
	size_t list = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		list++;
	}
	return (list);
}

