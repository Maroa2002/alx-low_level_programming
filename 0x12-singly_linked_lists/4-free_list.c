#include "lists.h"
#include <stdlib.h>

/**
  * free_list - frees a list
  * @head: pointer to first node
  * Return: nothing
  **/

void free_list(list_t *head)
{
	list_t *current, *temp;

	current = head;
	while (current != NULL)
	{
		/* Storenext node before freeing current node */
		temp = current->next;
		free(current->str); /* free str */
		free(current); /* free current node */
		current = temp; /* free next node */
	}
}
