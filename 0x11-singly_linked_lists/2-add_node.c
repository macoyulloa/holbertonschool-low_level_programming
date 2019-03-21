#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a new head into the list.
 * @head: structure
 * @str: string
 * Return: the adress of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *c_str;
	unsigned int new_len = 0;

	c_str = strdup(str);
	while (c_str[new_len] != '\0')
	{
		new_len++;
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node->str);
		free(new_node->len);
		free(new_node);
		return (NULL);
	}
	new_node->str = c_str;
	new_node->len = new_len;
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}
