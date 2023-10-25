#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to the pointer to the head of the list.
 * @n: Value to be stored in the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newer_node, *cur;

	newer_node = malloc(sizeof(listint_t));
	if (newer_node == NULL)
		return (NULL);

	newer_node->n = n;

	newer_node->next = NULL;

	if (*head == NULL)
	{
		*head = newer_node;
		return (newer_node);
	}

	cur = *head;
	while (cur->next != NULL)
	{
		cur = cur->next;
	}

	cur->next = newer_node;

	return (newer_node);
}
