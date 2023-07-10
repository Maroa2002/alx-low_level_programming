#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - returns a pointer to a 2 dimensional array of integers
  * @width: number of columns
  * @height: number of rows
  * Return: pointer to an integer
  * or NULL on failure
  **/

int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	/* check if input values are valid */
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	/* allocating memory for the rows */
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			/* free memory for previous rows if allocation fails */
			for (j = 0; j < width; j++)
			{
				free(ptr[j]);
			}
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0; /* initialize each element to zero */
		}
	}

	return (ptr);
}



