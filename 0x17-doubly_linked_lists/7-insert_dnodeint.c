#include "lists.h"

/**
  * listint_len - prints the number of elements in a list
  * @h: head pointer
  *
  * Return: number of elements
  **/

unsigned int listint_len(const dlistint_t *h)
{
	unsigned int count = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}

/**
  * insert_dnodeint_at_index - inserts a new node at a given position
  * @h: pointer to the first node
  * @idx: index of list
  * @n: new data
  *
  * Return: address of new node or null if it failed
  **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int list_len, i;
	dlistint_t *new_node, *ptr = *h;

	list_len = listint_len(*h);
	if (idx > list_len)
		return (NULL);

	if (h == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
		(add_dnodeint(h, n));
	else if (idx == list_len)
		(add_dnodeint_end(h, n));
	else
	{
		for (i = 0; i < idx - 1; i++)
			ptr = ptr->next;
		new_node->prev = ptr;
		new_node->next = ptr->next;
		ptr->next->prev = new_node;
		ptr->next = new_node;
	}

	return (*h);
}
