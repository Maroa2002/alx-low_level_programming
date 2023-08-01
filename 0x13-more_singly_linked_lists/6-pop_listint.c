#include "lists.h"
#include <stdlib.h>

/**
  * pop_listint - deletes head node
  * @head: double ptr to first node
  * Return: address to head node
  **/

int pop_listint(listint_t **head)
{
	listint_t *tmp, *current;
	int head_data;

	if (*head == NULL)
		return (0);

	current = *head;
	tmp = current; /* store address of head node */
	head_data = tmp->n; /* store the data of head node */
	current = current->next; /* point head to next node */

	free(tmp); /* free head node */

	return (head_data);
}
