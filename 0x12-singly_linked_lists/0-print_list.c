#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * print_list - prints all the elements of a list
  * @h: pointer to first node
  * Return: number of nodes
  **/

size_t print_list(const list_t *h)
{
	int count;
	const list_t *current_node;

	if (h == NULL)
	{
		return (0);
	}

	current_node = h;
	count = 0;
	while (current_node != NULL)
	{
		if (current_node->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", current_node->len, current_node->str);
		}
		current_node = current_node->next;
		count++;
	}

	return (count);
}
