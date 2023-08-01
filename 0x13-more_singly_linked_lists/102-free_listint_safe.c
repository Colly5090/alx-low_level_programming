#include "lists.h"

/**
 * free_listint_safe - to free list of all nodes
 * @h: pointer to first node to start freeing
 * Return: elements to be freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *searcher;
	size_t length;
	unsigned int i;

	if (h == NULL || (*h)->next == NULL)
		return (0);

	while (*h)
	{
		i = *h - (*h)->next;
		if (i > 0)
		{
			searcher = (*h)->next;
			free(*h);
			*h = searcher;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}
	*h = NULL;

	return (length);
}
