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
	int *arr;
	int i;

	if (min > max)
		return (NULL);
	arr = (malloc(sizeof(int) * (max - min + 1)));
	if (arr == NULL)
	{
		return (NULL);
		free(arr);
	}
	for (i = 0; min <= max; min++, i++)
		arr[i] = min;
	return (arr);
}
