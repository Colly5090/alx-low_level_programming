#include "lists.h"

/**
 * add_node_end - to add new node at the end of a list
 * @head: pointer to the start of linked list
 * @str: pointer to the nodes
 * Return: total
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *start = NULL;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
	len++;

	if (!start)
	{
		return (NULL);
	}

	start->str = strdup(str);
	start->len = len;
	start->next = NULL;

	if (*head == NULL)
	{
		*head = start;
		return (start);
	}

	while (temp->next)
	{
		temp = temp->next;
		temp->next = start;
	}

	return (start);
}
