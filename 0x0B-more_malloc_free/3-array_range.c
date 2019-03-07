#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - show all the values  from min to max
 * @min: minimo
 * @max: maximo
 *
 * Return: void pointer.
 */
int *array_range(int min, int max)
{
	void *arr;

	if (min > max)
		return (NULL);
	arr = (malloc(sizeof(int) * (max - min)));
	if (arr == NULL)
		return (NULL);
	return (arr);
}
