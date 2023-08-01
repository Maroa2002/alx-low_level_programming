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
  * delete_nodeint_at_index - deletes nth node
  * @head: doble ptr to first node
  * @index: specified index
  * Return: 1 if successful, -1 if failed
  **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int size;
	listint_t *temp, *previous;

	size = get_size_list(head);

	if (head == NULL) /* checking for empty list */
		return (-1);

	if (index > size) /* checking for invalid input */
		return (-1);

	temp = *head;
	if (index == 1)
	{
		*head = (*head)->next;
		free(temp);
		return(1);
	}
	else
	{
		while (--index)
		{
			previous = temp; /* stores the previous node */
			temp = temp->next;
		}
		/* assign nth node next to previous node next */
		previous->next = temp->next;
		free(temp); /* free next node */
	}
	return (1);
}
