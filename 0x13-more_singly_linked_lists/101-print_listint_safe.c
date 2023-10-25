#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
        const listint_t *temp_num = NULL;
        const listint_t *l_num = NULL;
        size_t num = 0;
        size_t newer_num;

        temp_num = head;
        while (temp_num)
        {
                printf("[%p] %d\n", (void *)temp_num, temp_num->n);
                num++;
                temp_num = temp_num->next;
                l_num = head;
                newer_num = 0;
                while (newer_num < num)
                {
                        if (temp_num == l_num)
                        {
                                printf("-> [%p] %d\n", (void *)temp_num, temp_num->n);
                                return (num);
                        }
                        l_num = l_num->next;
			newer_num++;
		}
                if (!head)
                        exit(98);
        }
        return (num);
}
