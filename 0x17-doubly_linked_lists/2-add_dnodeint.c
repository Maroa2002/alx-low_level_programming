#include "lists.h"

/**
  * add_dnodeint - adds a new node at the beginning of a list
  * @head: ptr to the head
  * @n: new data
  *
  * Return: address of the element,
  * or NULL if it failed
  **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	/* memory allocation for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /* assigning data to new node */
	new_node->prev = NULL; /* NULL since it becomes the new head */
	new_node->next = *head;

	if (*head != NULL) /* if it exists */
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
