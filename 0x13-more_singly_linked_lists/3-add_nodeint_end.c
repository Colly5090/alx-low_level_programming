#include "lists.h"

/**
 * add_nodeint_end - To insert node at the end of nodes
 * @head: pointer to starting point of the node
 * @n: new node to be inserted
 * Return: new node at the end
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endNode;
	listint_t *searcher;

	endNode = (listint_t *)malloc(sizeof(listint_t));
	if (endNode == NULL)
	{
		return (NULL);
	}

	endNode->n = n;
	endNode->next = NULL;

	if (*head == NULL)
	{
		*head = endNode;
	}
	else
	{
		searcher = *head;
		while (searcher->next != NULL)
		{
			searcher = searcher->next;
		}
		searcher->next = endNode;
	}
	return (endNode);
}
