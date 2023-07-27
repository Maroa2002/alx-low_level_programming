#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  * add_node_end - adds new node at end of a list
  * @head: pointer to the first node
  * @str: data
  * Return: address of new element
  * or NULL if it fails
  **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *ptr = *head;

	if (str == NULL)
		return (NULL);

	if (strdup(str) == NULL)
		return (NULL);

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	temp->len = strlen(temp->str);
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}

		ptr->next = temp;
	}

	return (temp);
}
