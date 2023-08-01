#include <stdlib.h>
#include "lists.h"

/**
  * get_size_list - returns size of list
  * @head: double ptr to first node
  * Return: integer size
  **/

unsigned int get_size_list(listint_t **head)
{
	unsigned int size;
	listint_t *temp;

	temp = *head;
	size = 0;

	while (temp != NULL)
	{
		size++;
		temp = temp->next;
	}

	return (size);
}

/**
  * insert_nodeint_at_index - inserts a new node at given position
  * @head: double ptr to first node
  * @idx: given position
  * @n: data
  * Return: index of new node
  * 0r NULL if it fails
  **/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int size = get_size_list(head);
	listint_t *new_node, *temp;

	/* check for invalid index */
	if (idx > size)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	else
	{
		temp = *head;
		while (--idx) /* traversing unitl nth node */
			temp = temp->next;

		/* assigning (n+1)th node to new_node->next */
		new_node->next = temp->next;
		/* assign new_node to nth node */
		temp->next = new_node;
	}

	return (new_node);
}
