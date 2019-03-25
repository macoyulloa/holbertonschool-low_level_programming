#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - find a node into a linked list
 * @head: linked list
 * @index: position that is called
 * Return: returns the nth node or NULL if failed.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *position;
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
