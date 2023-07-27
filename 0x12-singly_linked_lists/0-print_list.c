#include "lists.h"
#include <stdio.h>

/**
  * print_list - prints all elements of a list
  * @h: pointer to first node
  * Return: number of nodes
  **/

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);

		count++;
		ptr = ptr->next;
	}

	return (count);
}
