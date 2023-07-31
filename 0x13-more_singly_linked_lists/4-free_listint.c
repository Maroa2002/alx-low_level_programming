#include <stdlib.h>
#include "lists.h"

/**
  * free_listint - frees a list
  * @head: ptr to first node
  * Return: nothing
  **/

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}


