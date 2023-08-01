#include "lists.h"

/**
  * reverse_listint - reverses a linked list
  * @head: double ptr to first node
  * Return: ponter to first node of reversed list
  **/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous;
	listint_t *next;

	if (*head == NULL)
		return (NULL);

	previous = NULL;
	next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	*head = previous;

	return (*head);
}
