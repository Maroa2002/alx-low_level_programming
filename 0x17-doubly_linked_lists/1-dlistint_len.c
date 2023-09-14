#include "lists.h"

/**
  * dlistint_len - prints the number of elements in a list
  * @h: head pointer
  *
  * Return: number of elements
  **/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}
