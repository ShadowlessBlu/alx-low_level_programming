#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - creates a new memory space which contains
 * a copy of the string given as a parameter
 * @strn: string to be copied
 *
 * Return: a pointer to the newly allocated memory space (SUCCESS)
 * of NULL (FAIL)
 */
char *_strdup(char *strn)
{
	unsigned int i;
	unsigned int size;
	char *p;

	i = 0;
	size = 0;

	if (strn == NULL)
		return (NULL);

	/*Get size of str*/
	while (strn[size])
	{
		size++;
	}

	p =  malloc(sizeof(char) * (size + 1));
	/*size + 1 for the null terminating character*/

	/*NULL on memory allocation fail*/
	if (p == NULL)
		return (NULL);

	while ((p[i] = strn[i]) != '\0')
		i++;

	return (p);
}
