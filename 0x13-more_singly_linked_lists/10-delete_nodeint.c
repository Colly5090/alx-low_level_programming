#include "lists.h"

/**
 * delete_nodeint_at_index - to delete node
 * @head: the start of a node pointer
 * @index: index to be deleted
 * Return: 1 for success -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *searcher;
	unsigned int i = 0;
	listint_t *oldNode;

	oldNode = NULL;
	searcher = *head;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = searcher->next;
		free(searcher);
		return (1);
	}

	while (i < index - 1)
	{
		if (searcher->next != NULL)
		{
			return (-1);
		}
		searcher = searcher->next;
		i++;
	}

	oldNode = searcher->next;
	searcher->next = oldNode->next;
	free(oldNode);
	return (1);
}
