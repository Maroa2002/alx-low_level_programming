#include "lists.h"

/**
  * sum_dlistint - returns the sum of all the data of a list
  * @head: ptr to the first node
  *
  * Return: integer sum,
  * or 0 if list is empty
  **/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr = head;

	if (head == NULL)
		return (0);

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
