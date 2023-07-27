#include "lists.h"
#include <stdio.h>

/**
  * list_len - returns number of elements in a linked list
  * @h: pointer to first node
  * Return: number of elements
  **/

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
