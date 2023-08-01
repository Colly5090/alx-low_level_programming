#include "lists.h"

/**
 * get_nodeint_at_index - To determine a node at nth position
 * @head: pointer to the start of the node
 * @index: the position to be determined
 * Return: the determined node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *searcher;

	searcher = head;

	while (searcher && i < index)
	{
		searcher = searcher->next;
		i++;
	}

	return (searcher ? searcher : NULL);
}
