#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * len - return the leng of a linked list.
 * @h: linked list
 * Return: number of nodes.
 */
unsigned int len(listint_t *h)
{
	unsigned int num_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		num_nodes++;
	}
	return (num_nodes);
}
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
	unsigned int leng;

	actual_node = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
		return (new_node);
	if (idx == 0)
	{
		new_node->next = *head;
		return (new_node);
	}
	leng = len(*head);
	if (idx <= leng)
	{
	while (idx - 1 > 0)
	{
		actual_node = actual_node->next;
		idx--;
	}
	new_node->next = actual_node->next;
	actual_node->next = new_node;
	return (new_node);
	}
	else
		return (NULL);
}
