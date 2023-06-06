#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t huru = 0;
	int no_ele;
	listint_t *new_node;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		no_ele = *h - (*h)->next;
		if (no_ele > 0)
		{
			new_node = (*h)->next;
			free(*h);
			*h = new_node;
			huru++;
		}
		else
		{
			free(*h);
			*h = NULL;
			huru++;
			break;
		}
	}
	*h = NULL;

	return (huru);
}
