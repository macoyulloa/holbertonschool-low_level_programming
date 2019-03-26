#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - frees memory of one linked list, sets the head to NULL
 * @head: pointer to the linked list
 *
 * Return: void function.
 */
void free_listint2(listint_t **head)
{
	listint_t *next_node;

	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}
}
