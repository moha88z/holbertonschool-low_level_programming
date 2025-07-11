#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts a new node at a given index
 * @h: Pointer to pointer of head of list
 * @idx: Index to insert the new node at (starts at 0)
 * @n: Data for the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL || (temp->next == NULL && i < idx - 1))
		return (NULL);

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = temp->next;
	new->prev = temp;

	temp->next->prev = new;
	temp->next = new;

	return (new);
}
