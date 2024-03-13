#include "search_algos.h"

/**
 * linear_search - linear search algorithm
 * @array: A pointer to first element of array
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: First index where value is located in ana array
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
