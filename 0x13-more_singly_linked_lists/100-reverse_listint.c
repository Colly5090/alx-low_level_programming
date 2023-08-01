#include "lists.h"

/**
 * reverse_listint - To reverse a node
 * @head: the start pointer of the node
 * Return: pointer to the reversed node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *endNode = NULL;
	listint_t *currentNode = *head;

	while (currentNode != NULL)
	{
		*head = currentNode->next;
		curentNode->next = endNode;
		endNode = currentNode;
		currentNode = *head;
	}

	*head = endNode;
	return (*head);
}
