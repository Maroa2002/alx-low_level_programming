#include "lists.h"

/**
  * add_dnodeint_end - adds a new node at the end of a list
  * @head: pointer to the first node
  * @n: new data
  *
  * Return: address of the new element,
  * or NULL if it failed
  **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *ptr = *head;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	/* if the list is empty */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	new_node->prev = ptr;
	ptr->next = new_node;

	return (new_node);
}
