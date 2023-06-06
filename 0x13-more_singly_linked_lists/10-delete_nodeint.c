#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *old_node = *head;
	listint_t *new_node = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(old_node);
		return (1);
	}

	while (a < index - 1)
	{
		if (!old_node || !(old_node->next))
			return (-1);
		old_node = old_node->next;
		a++;
	}

	new_node = old_node->next;
	old_node->next = new_node->next;
	free(new_node);

	return (1);
}
