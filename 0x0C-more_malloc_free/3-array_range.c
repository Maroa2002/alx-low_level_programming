#include "main.h"
#include <stdlib.h>

/**
  * array_range - creates an array of integers
  * @min: minimum value
  * @max: maximum value
  * Return: array of integers
  **/

int *array_range(int min, int max)
{
	int *array;
	int i, size;

	size = (max - min) + 1;
	array = malloc(size);
	if (array == NULL || min > max)
	{
		free(array);
		return (NULL);
	}

	array[0] = min;
	for (i = 1; i < size; i++)
	{
		array[i] = min++;
	}

	return (array);
}
		

