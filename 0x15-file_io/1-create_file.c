#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - Creates a file and writes text_content to it
 * @filename: Name of the file to create
 * @text_content: NULL-terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fil;
	int write_info;
	int len;

	if (filename == NULL)
		return (-1);

	fil = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fil == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			continue;

		write_info = write(fil, text_content, len);
		if (write_info == -1)
		{
			close(fil);
			return (-1);
		}
	}

	close(fil);
	return (1);
}
