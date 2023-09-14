#include "lists.h"

/**
  * free_dlistint - frees the dlistint_t list
  * @head: pointer to the first node
  *
  * Return: Always nothing
  **/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head, *temp;

	while (ptr != NULL)
	{
		temp = ptr;
		ptr = ptr->next;
		free(temp);
	}
}
