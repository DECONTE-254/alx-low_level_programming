#include "lists.h"

/**
 * insert_nodeint_at_index - adds a new node to a linked list at a given position
 * @head: pointer to the head of the list
 * @idx: index of the list where the new node will be added (indices start at 0)
 * @n: value for the new node to be added
 * @Return: pointer to the new node, or NULL -if function fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	listint_t *current_node = *head;

	for (unsigned int i = 0; i < idx - 1; i++)
	{
		if (current_node == NULL)
		{
			free(new_node);
			return (NULL);
		}
		current_node = current_node->next;
	}
	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}