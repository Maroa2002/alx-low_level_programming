#include "lists.h"
#include <stdlib.h>

/**
  * pop_listint - deletes head node
  * @head: double ptr to first node
  * Return: address to head node
  **/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int head_data;

	if (*head == NULL)
		return (0);

	temp = *head; /* store address of head node */
	head_data = temp->n; /* store the data of head node */
	*head = (*head)->next; /* point head to next node */
	free(temp); /* free head node */

	return (head_data);
}
