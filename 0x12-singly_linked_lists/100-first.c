#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

void initial(void) __attribute__ ((constructor));

/**
 * initial - prints a string literal before main() is executed
 * Return: void.
 */
void initial(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
