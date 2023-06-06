#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *find1 = head;
	listint_t *find2 = head;

	if (!head)
		return (NULL);

	while (find1 && find2 && find2->next)
	{
		find2 = find2->next->next;
		find1 = find1->next;
		if (find2 == find1)
		{
			find1 = head;
			while (find1 != find2)
			{
				find1 = find1->next;
				find2 = find2->next;
			}
			return (find2);
		}
	}

	return (NULL);
}
