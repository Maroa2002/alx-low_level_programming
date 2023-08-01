#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * get_node_size - returns size of list
  * @head: ptr to first node
  * Return: size of list
  **/

unsigned int get_node_size(listint_t *head)
{
	unsigned int size;

	size = 0;
	while (head != NULL)
	{
		size++;
		head = head->next;
	}

	return (size);
}

/**
  * get_nodeint_at_index - returns nth node
  * @head: ptr to first node
  * @index: index of node
  * Return: address of nth node
  **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int size = get_node_size(head);
	unsigned int count = 0;

	if (index >= size || head == NULL)
		return (NULL);

	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}

	return (NULL); /* for non-existent index */
}

