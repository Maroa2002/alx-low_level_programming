#include <stdio.h>
#include "lists.h"

/**
  * listint_len - returns number of elements in list
  * @h: ponter to first node
  * Return: number of elements
  **/

size_t listint_len(const listint_t *h)
{
	unsigned int nodes;

	nodes = 0;
	while (h != NULL)
	{
		nodes++;
		h = (*h).next;
	}

	return (nodes);
}
