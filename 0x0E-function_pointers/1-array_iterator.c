#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an integer
 * @array: input
 * @size: input
 * @action: pointer a function
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t num;
	int param = 0;

	for (num = 0; num < size; num++)
	{
		param = array[num];
		action(param);
	}
}
