#include "main.h"
#include <stdlib.h>
/**
  *argstostr - concatenates all arguments of the program.
  *@ac: argument count.
  *@ap: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */
char *argstostr(int ac, char **ap)
{
	int i, j, k, size;
	char *args;

	size = 0;
	k = 0;
	if (ac == 0 || ap == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (ap[i][j])
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	args = malloc((sizeof(char) * size) + 1);
	if (args == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (ap[i][j])
		{
			args[k] = ap[i][j];
			j++;
			k++;
		}
		args[k] = '\n';
		k++;
		i++;
	}
	args[k] = '\0';
	return (args);
}
