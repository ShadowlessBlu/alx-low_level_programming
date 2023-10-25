#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes a node at a specific index.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node to delete.
 * Return: 1 if succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur, *pre;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		cur = *head;
		*head = cur->next;
		free(cur);
		return (1);
	}

	cur = *head;
	pre = NULL;
	for (i = 0; cur != NULL && i < index; i++)
	{
		pre = cur;
		cur = cur->next;
	}

	if (cur == NULL)
		return (-1);

	pre->next = cur->next;
	free(cur);
	return (1);
}
