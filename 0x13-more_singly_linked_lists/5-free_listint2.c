#include <stdlib.h>
#include "lists.h"

/**
  * free_listint2 - frees a list
  * @head: double ptr to first node
  * Return: void
  **/

void free_listint2(listint_t **head)
{
	listint_t *temp;
	
	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
}


