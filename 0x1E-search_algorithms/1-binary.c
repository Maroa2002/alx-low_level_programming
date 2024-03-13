#include "search_algos.h"

/**
 * binary_search - linear search algorithm
 * @array: pointer to the first element of input array
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, j = 0, k = 0, l = size - 1;

	if (!array || size <= 0)
		return (-1);
	while (k <= l)
	{
		printf("Searching in array: ");
		for (i = k; i <= l; i++)
		{
			if (i < r)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		j = (k + l) / 2;
		if (array[j] < value)
			k = j + 1;
		else if (array[j] > value)
			l = j - 1;
		else
			return (j);
	}
	return (-1);
}
