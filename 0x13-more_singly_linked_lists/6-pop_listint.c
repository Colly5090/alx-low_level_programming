#include "lists.h"

/**
 * pop_listint - to delete a node at the beginning
 * @head: pointer to start of node to be deleted
 * Return: number of the next node
 */
int pop_listint(listint_t **head)
{
	listint_t *searcher;
	int number;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		number = (*head)->n;
		searcher = (*head)->next;
		free(*head);
		*head = searcher;
	}
	return (number);
}
