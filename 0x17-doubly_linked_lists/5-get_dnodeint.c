#include "lists.h"

/**
  * get_dnodeint_at_index - returns the nth node
  * @head: ptr to the first node
  * @index: index of the nth node
  *
  * Return: nth node or NULL if it doesnt exist
  **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *ptr = head;

	if (head == NULL)
		return (NULL);

	while (ptr != NULL && count < index)
	{
		count++;
		ptr = ptr->next;
	}

	if (index == count)
		return  (ptr);

	return (NULL);
}
