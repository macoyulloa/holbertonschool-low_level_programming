#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - check if a number is equal to 98
 * @array: the array
 * @size: the size of the array
 * @cmp: pointer to a function
 * Return: an int.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int elem;

	if (array && size > 0 && cmp)
	{
	for (elem = 0; elem < size; elem++)
	{
		if (cmp(array[elem]) == 1)
			return (elem);
	}
	return (-1);
	}
	return (-1);
}
