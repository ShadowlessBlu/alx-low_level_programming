#include <stdlib.h>
#include <string.h>
#include "sing_list.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the head of the linked list.
 */
void free_list(list_t *head)
{
	list_t *cur;
	list_t *tempor;

	cur = head;

	while (cur != NULL)
	{
		tempor = current;
		cur = cur->next;

		free(tempor->str);

		free(tempor);
	}
}
