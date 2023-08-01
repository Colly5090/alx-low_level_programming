#include "lists.h"

size_t unique_code_count(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * unique_code_count - to count all the unique codes
 * @head: start of node pointer
 * Return: list of the node
 */
size_t unique_code_count(const listint_t *head)
{
	const listint_t *start, *end;
	size_t node = 1;

	if (head == NULL)
		return (0);
	start = head->next;
	end = (head->next)->next;

	while (end)
	{
		if (start == end)
		{
			start = end;
			while (start != end)
			{
				node++;
				start = start->next;
				end = end->next;
			}
			start = start->next;

			while (start != end)
			{
				node++;
				start = start->next;
			}
			return (node);
		}

		start = start->next;
		end = (start->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - to print list of nodes safely
 * @head: beginning of pointer to list nodes
 * Return: list of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node, i = 0;

	node = unique_code_count(head);

	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; i < node; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p] %d\n", (void *)head, head->n);
	}
	return (node);
}
