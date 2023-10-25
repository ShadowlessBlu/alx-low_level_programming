#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to the head of the list.
 * @idx: Index at which the new node should be inserted.
 * @n: Value to be assigned to the new node.
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newer_node, *cur;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	newer_node = malloc(sizeof(listint_t));
	if (newer_node == NULL)
		return (NULL);

	newer_node->n = n;

	if (idx == 0)
	{
		newer_node->next = *head;
		*head = newer_node;
		return (newer_node);
	}

	cur = *head;
	for (i = 0; i < idx - 1 && cur != NULL; i++)
		cur = cur->next;

	if (cur == NULL)
	{
		free(newer_node);
		return (NULL);
	}

	newer_node->next = current->next;
	cur->next = newer_node;

	return (newer_node);
}
