#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - insert a new node in based of an index.
 * @head: linked list.
 * @idx: position to add the new node.
 * @n: integer, part of the new node.
 * Return: Address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *actual_node;
	unsigned int i = 0;

	actual_node = *head;
	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->next = NULL;
		return (new_node);
	}
	else if (idx == 0)
	{
		new_node->next = actual_node;
		return (new_node);
	}
	for (; actual_node != NULL && i < idx - 1; i++)
		actual_node = actual_node->next;
	if ((actual_node == NULL) || (actual_node->next == NULL))
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = actual_node->next;
	actual_node->next = new_node;
	return (new_node);
}
