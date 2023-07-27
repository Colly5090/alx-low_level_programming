#include "lists.h"

/**
 * *add_node - To add nodes from the beginning
 * @head: pointer to the first node
 * @str: pointer to the store
 * Return: total
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int len = 0;

	while (str[len])
	len++;

	temp = malloc(sizeof(list_t);
	if (!temp)
	return (NULL)

	temp->str = stdup(str);
	temp->len = len;
	temp->next = (*head);
	(*head) = temp;

	return (*head);
}
