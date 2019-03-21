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
	list_t *tmp = head;

	free(tmp->str);
	free(tmp);
}
