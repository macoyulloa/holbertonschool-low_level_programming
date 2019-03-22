#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - check the code for Holberton School students.
 * @head: structure
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
	tmp = head->next;
	free(head->str);
	free(head);
	head = tmp;
	}
}
