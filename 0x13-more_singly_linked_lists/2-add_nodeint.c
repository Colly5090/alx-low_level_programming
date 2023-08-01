#include "lists.h"

/**
 * add_nodeint - To add new node to the beginning of a node
 * @head: a head pointer to the beginning of the nodes
 * @n: number of input data
 * Return: address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	if (*head == NULL)
	{
		newNode->next = NULL;
		*head = newNode;
	}
	else
	{
		newNode->next = *head;
		*head = newNode;
	}
	return (newNode);
}
