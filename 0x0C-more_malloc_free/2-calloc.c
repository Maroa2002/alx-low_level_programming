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
	unsigned char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = malloc(nmemb * size);
	if (array == NULL)
	{
		return (NULL);
	}

	/* casting void * pointer to unsigned char * */
	ptr = (unsigned char *)array;
	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}

	return (array);
}
