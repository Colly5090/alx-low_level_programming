#include "lists.h"

/**
 * free_listint_safe - to free list of all nodes
 * @h: pointer to first node to start freeing
 * Return: elements to be freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *start = *h;
	listint_t *end;
	unsigned int n = 0;

	if (start == 0 || h == 0)
	{
		return (0);
	}

	start = *h;
	while (start != 0)
	{
		end = start;
		start = start->next;
		n++;

		free(end);

		if (end <= start)
			break;
	}
	*h = 0;
	return (n);
}
