#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list.
 * @head: liked list
 * Return: the head nodes data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num = 0;

	if (*head != NULL)
	{
		tmp = *head;
		num = tmp->n;
		*head = (*head)->next;
		free(tmp);
		return (num);
	}
	else
		return (0);
}
