#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a new node in an index.
 * @h: linked list.
 * @idx: position to add the new node.
 * @n: integer, part of the new node.
 * Return: Address of the new node, NULL if it fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *actual_node;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*h == NULL)
	{
		new_node->next = NULL;
		new_node->prev = *h;
		*h = new_node;
		return (new_node);
	}
	else if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}
	actual_node = *h;
	while (idx - 1 > 0)
	{
		actual_node = actual_node->next;
		idx--;
		if (actual_node == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = actual_node->next;
	actual_node->next = new_node;
	return (new_node);
}
