#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old_node = NULL;
	listint_t *new_node = NULL;

	while (*head)
	{
		new_node = (*head)->next;
		(*head)->next = old_node;
		old_node = *head;
		*head = new_node;
	}

	*head = old_node;
	return (*head);
}
