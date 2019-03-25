#include <stdio.h>
#include "lists.h"

/**
 * listint_len - return the leng of a linked list.
 * @h: linked list
 * Return: Always 0.
 */
size_t listint_len(const listint_t *h)
{
	unsigned int num_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
