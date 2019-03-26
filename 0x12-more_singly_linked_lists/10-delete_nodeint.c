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
 * delete_nodeint_at_index - delete a n node.
 * @head: linked list
 * @index: the position of the node to be deleted
 * Return: 1 succeed, -1 failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	unsigned int leng;

	leng = len(*head);
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	/**else if (index == leng)
	{
	}**/
	else if (index < leng)
	{
		while (index - 1 > 0)
		{
			*head = (*head)->next;
			index--;
		}
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	else
		return (-1);
}
