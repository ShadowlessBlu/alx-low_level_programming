#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @S1: string to concatenate
 * @S2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *S1, char *S2)
{
	char *S3;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len1 = 0;
	unsigned int len2 = 0;

	while (S1 && S1[len1])
		len1++;
	while (S2 && S2[len2])
		len2++;

	S3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (S3 == NULL)
		return (NULL);

	i = 0;
	j = 0;

	if (S1)
	{
		while (i < len1)
		{
			S3[i] = S1[i];
			i++;
		}
	}

	if (S2)
	{
		while (i < (len1 + len2))
		{
			S3[i] = S2[j];
			i++;
			j++;
		}
	}
	S3[i] = '\0';

	return (S3);
}
