#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint - adds new node at beginning of list
  * @head: ptr to first node
  * @n: data
  * Return: address of new element,
  * or NULL if it failed
  **/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
		new_node->next = NULL;
	else
	{
		new_node->next = *head;
	}
	*head = new_node;

	return (new_node);
}
