#include "main.h"
#include <stdlib.h>

/**
  * _calloc - allocates memory for an array
  * @nmemb: number of elements
  * @size: bytes of each element
  * Return: void
  **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = malloc(nmemb * size);
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		array[i] = 0;
	}

	return (array);
}
