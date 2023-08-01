#include <stdlib.h>
#include "lists.h"

/**
  * free_listint2 - frees a list
  * @head: double ptr to first node
  * Return: void
  **/

void free_listint2(listint_t **head)
{
	listint_t *temp, *curnt;
	
	if (head == NULL)
		return;

	curnt = *head;
	while (curnt != NULL)
	{
		temp = curnt;
		curnt = curnt->next;
		free(temp);
	}
}


