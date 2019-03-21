#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new head into the list.
 * @head: structure
 * @str: string
 * Return: the adress of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *end = *head;
	unsigned int new_len = 0;

	while (str[new_len] != '\0')
		new_len++;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = new_len;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (end->next != NULL)
		end = end->next;
	end->next = new_node;
	return (new_node);
}
