#include <stdlib.h>
#include <stdio.h>
#include "sing_list.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: A pointer to a pointer to the head of the linked list.
 * @str: The string to be added to the new node.
 *
 * Return: The address of the new element (new node), or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newer_node;

	if (str == NULL)
		return (NULL);

	newer_node = malloc(sizeof(list_t));
	if (newer_node == NULL)
		return (NULL);


	newer_node->str = strdup(str);
	if (newer_node->str == NULL)
	{
		free(newer_node);
		return (NULL);
	}

	newer_node->len = strlen(str);

	newer_node->next = *head;

	*head = newer_node;

	return (newer_node);
}
