#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a given node of a dlistint_t
 * @head: head structure double linked list
 * @index: node to be deleted
 * Return: 1 in succeeded, -1 failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *link_next;
	unsigned int i = 0;

	tmp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	for (; tmp != NULL && i < index - 1; i++)
		tmp = tmp->next;
	if (tmp == NULL || tmp->next == NULL)
		return (-1);
	link_next = tmp->next->next;
	free(tmp->prev);
	free(tmp->next);
	tmp->next = link_next;
	return (1);
}
