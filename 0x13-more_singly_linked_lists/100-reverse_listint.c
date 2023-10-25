#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre = NULL;
	listint_t *skip = NULL;

	while (*head)
	{
		skip = (*head)->skip;
		(*head)->skip = pre;
		pre = *head;
		*head = skip;
	}

	*head = pre;

	return (*head);
}
