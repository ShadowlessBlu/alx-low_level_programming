#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
  * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tardy = head;
	listint_t *quick = head;

	if (!head)
		return (NULL);

	while (tardy && quick && quick->next)
	{
		quick = quick->next->next;
		tardy = tardy->next;
		if (quick == tardy)
		{
			tardy = head;
			while (tardy != quick)
			{
				tardy = tardy->next;
				quick = quick->next;
			}
			return (quick);
		}
	}

	return (NULL);
}
