#include <stddef.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a list_t list
 * @h: Pointer to the head of the list
 *
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
