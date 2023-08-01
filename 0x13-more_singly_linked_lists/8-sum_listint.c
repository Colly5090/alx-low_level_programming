#include "lists.h"

/**
 * sum_listint - to sum all given nodes
 * @head: pointer to start of node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t searcher;
	int addUp = 0;

	searcher = head;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		while (searcher)
		{
			addUp += searcher->n;
			searcher = searcher->next;
		}
	}
	return (addUp);
}
