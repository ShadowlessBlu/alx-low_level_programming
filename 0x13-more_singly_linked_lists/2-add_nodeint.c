#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to the pointer to the head of the list.
 * @n: Value to be stored in the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newer_node;

	newer_node = malloc(sizeof(listint_t));
	if (newer_node == NULL)
		return (NULL);

	newer_node->n = n;

	newer_node->next = *head;

	*head = newer_node;

	return (newer_node);
}
