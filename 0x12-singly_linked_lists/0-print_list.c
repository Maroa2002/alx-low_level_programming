#include "lists.h"
#include <stdio.h>

/**
  * print_list - prints all the elements of a list
  * @h: pointer to first node
  * Return: number of nodes
  **/

size_t print_list(const list_t *h)
{
	int count;

	if (h == NULL)
	{
		return (-1);
	}

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h =  h->next;
		count++;
	}

	return (count);
}
