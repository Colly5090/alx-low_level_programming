#include "lists.h"

/**
 * free_listint2 - to free lits of nodes
 * @head: pointer to start of nodes to be freed
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *searcher;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		searcher = (*head)->next;
		free(*head);
		*head = searcher;
	}
	*head = NULL;
}
