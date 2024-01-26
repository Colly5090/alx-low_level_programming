#include "lists.h"
/**
 * insert_dnodeint_at_index - A function to insert a node at a position
 * @h: pointer to the header
 * @idx: index where node is inserted
 * @n: data in the node
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *temp = *h;
	dlistint_t *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp != NULL && i < idx)
	{
		if (i == idx - 1)
		{
			if (temp->next == NULL)
			{
				return (add_dnodeint_end(h, n));
			}
			else
			{
				new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
				if (new_node == NULL)
				{
					return (NULL);
				}
				new_node->n = n;
				new_node->next = temp->next;
				new_node->prev = temp;
				temp->next->prev = new_node;
				temp->next = new_node;

				return (new_node);
			}
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
