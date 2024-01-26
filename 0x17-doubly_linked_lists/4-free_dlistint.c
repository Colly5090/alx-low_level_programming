#include "lists.h"
/**
 * free_dlistint - A function that frees a list
 * @head: head pointer to the first node
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		temp = head->next;
		free(temp);
	}
}
