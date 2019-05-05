#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - find node into a double linked list
 * @head: linked list
 * @index: position that is called
 * Return: returns the nth node or NULL if failed.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *position;
	unsigned int count = 0;

	position = head;
	while (position != NULL)
	{
		if (count == index)
			return (position);
		position = position->next;
		count++;
	}
	return (NULL);
}
