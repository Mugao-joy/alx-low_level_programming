#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * unik - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *new_node, *old_node;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	new_node = head->next;
	old_node = (head->next)->next;

	while (old_node)
	{
		if (new_node == old_node)
		{
			new_node = head;
			while (new_node != old_node)
			{
				node++;
				new_node = new_node->next;
				old_node = old_node->next;
			}

			new_node = new_node->next;
			while (new_node != old_node)
			{
				node++;
				new_node = new_node->next;
			}
			return (node);
		}
			new_node = new_node->next;
			old_node = (old_node->next)->next;
	}
		return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node, index = 0;

	node = looped_listint_len(head);

	if (node == 0)
	{
		for ( ;head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < node; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p] %d\n", (void *)head, head->n);
	}
	return (node);
}

