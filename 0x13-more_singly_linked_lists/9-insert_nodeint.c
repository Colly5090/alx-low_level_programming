#include "lists.h"

/**
 * insert_nodeint_at_index - To insert a new node at any position
 * @head: start of node pointer
 * @idx: an index where the new node will be inserted
 * @n: number of nodes given
 * Return: newnode
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *searcher;
	unsigned int i;

	newNode = (listint_t *)malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	searcher = *head;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	for (i = 0; searcher && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newNode->next = searcher->next;
			searcher->next = newNode;
			return (newNode);
		}
		else
		{
			searcher = searcher->next;
		}
	}
	return (NULL);
}
