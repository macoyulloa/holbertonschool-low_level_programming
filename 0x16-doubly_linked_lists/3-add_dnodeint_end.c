#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - add node to end of the function
 * @head: head of the double linked list
 * @n: integer of the new node
 * Return: dlistint_t adress or NULL if fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node_end, *last_node;

	last_node = *head;
	new_node_end = malloc(sizeof(dlistint_t));
	if (new_node_end == NULL)
		return (NULL);
	new_node_end->n = n;
	new_node_end->next = NULL;
	if (*head == NULL)
	{
		new_node_end->prev = NULL;
		*head = new_node_end;
		return (new_node_end);
	}
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = new_node_end;
	new_node_end->prev = last_node;
	return (new_node_end);
}
