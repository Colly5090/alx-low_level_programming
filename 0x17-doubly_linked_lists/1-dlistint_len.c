#include "lists.h"
/**
 * dlistint_len - A function to return the number of elements
 * @h: pointer to the head
 * Return: number of element
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *temp = h;
	size_t counter = 0;

	while (temp != NULL)
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}
