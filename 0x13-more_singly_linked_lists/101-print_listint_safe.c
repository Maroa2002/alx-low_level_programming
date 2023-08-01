#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * print_listint - prints a list in safe mode
  * @head: ptr to first node
  * Return: number of nodes in the list
  **/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *loop1, *loop2;
	size_t nodes;

	if (head == NULL)
		exit (98);
	
	loop1 = loop2 = head;

	while (loop2 != NULL && loop2->next != NULL)
	{
		loop2 = loop2->next->next;
		loop1 = loop1->next;

		if (loop2 == loop1)
		{
			printf("[%p] %d\n", (void *)loop2, loop2->n);
			printf("[%p} %d\n", (void *)loop2->next, loop2->next->n);
			exit(98);
		}

		printf("[%p] %d\n", (void *)loop1, loop1->n);
		nodes++;
	}

	return (nodes);
}
