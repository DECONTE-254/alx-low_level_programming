#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: A pointer to the head of the linked list.
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current, *temp;
	size_t count = 0;

	if (head == NULL)
		exit(98);

	current = head;

	while (current != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);
		temp = current;
		current = current->next;
		if (temp <= current)
			break;
	}

	if (temp > current)
		return (count);
	{
		printf("-> [%p] %d\n", (void *)current, current->n);
		return (count);
	}
}
