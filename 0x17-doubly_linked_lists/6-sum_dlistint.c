#include "lists.h"
/**
 * sum_dlistint - A function to sum data in list
 * @head: header pointer
 * Return: number of data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum)
}
