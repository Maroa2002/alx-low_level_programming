#include "lists.h"

/**
  * find_listint_loop - find loop in linked list
  * @head: pointer to first node
  * Return: address of node where loop starts
  **/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	turtle = hare = head;

	while (hare != NULL && tortoise != NULL)
	{
		tortoise = tortoise->next; /* move tortoise one node */
		hare = hare->next->next; /* move hare two nodes */

		if (tortoise == hare) /* loop exists if they meet */
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = turtle->next;
				hare = hare->next;
			}
			return (tortoise);
		}
	}

	return (NULL);
}
