#include "lists.h"
/**
 * get_dnodeint_at_index - A function to get the nth node
 * @head: pointer to the start of a node
 * @index: index of a node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current = 0;

	while (head != NULL)
	{
		if (current == index)
		{
			return (head);
		}
		head = head->next;
		current++;
	}
	return (NULL);
}
