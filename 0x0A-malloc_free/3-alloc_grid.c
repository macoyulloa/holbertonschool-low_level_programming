#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - 2 dimensional array of integers
 * @width: int
 * @height: int
 *
 * Return: a 2 dimensional array.
 **/
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width > 0 && height > 0)
	{
		arr = (int **)malloc(height * sizeof(int *));
		for (i = 0; i < height; i++)
			arr[i] = (int *)malloc(width * sizeof(int));
			if (arr == NULL)
			{
				return (NULL);
			}
			else
			{
				for (i = 0; i < height; i++)
					for (j = 0; j < width; j++)
						arr[i][j] = 0;
			}
		return (arr);
	}
	return (NULL);
}
