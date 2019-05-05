#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: structure, double linked list
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
	tmp = head->next;
	free(head);
	head = tmp;
	}
}
