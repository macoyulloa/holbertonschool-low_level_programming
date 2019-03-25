#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - this function adds a new node to the end of the list.
 * @head: the first element in the list.
 * @n: the number to be added.
 * Return: a pointer to the new element added.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tmp;

	tmp = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;
	}
	return (new_node);
}
