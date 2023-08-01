#include "lists.h"

/**
 * free_listint - to free allocated memeory
 * @head: start of a node
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *searcher;

	while (head)
	{
		searcher = searcher->next;
		free(head);
		searcher = head;
	}
}
