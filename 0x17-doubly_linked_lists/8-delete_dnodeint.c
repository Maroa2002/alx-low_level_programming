#include "lists.h"

/**
  * listint_len - prints the number of elements in a list
  * @h: head pointer
  *
  * Return: number of elements
  **/

unsigned int listint_len(const dlistint_t *h)
{
	unsigned int count = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return (count);
}

/**
  * delete_dnodeint_at_index - deletes the node at a specified index
  * @head: pointer to the first node
  * @index: index of node to be deleted
  *
  * Return: 1 if it succeeded, -1 if it failed
  **/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *ptr;
	unsigned int i, list_len = listint_len(*head);

	if (head == NULL || *head == NULL)
		return (-1);

	if (index >= list_len)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
	}
	else if (index == list_len - 1)
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		if (ptr->prev != NULL)
			ptr->prev->next = NULL;
		free(ptr);
	}
	else
	{
		ptr = *head;
		for (i = 0; i < index; i++)
			ptr = ptr->next;
		ptr->prev->next = ptr->next;
		ptr->next->prev = ptr->prev;
		free(ptr);
	}
	return (1);
}
