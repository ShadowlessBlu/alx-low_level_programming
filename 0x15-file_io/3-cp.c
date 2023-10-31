#include "main.h"

/**
 * main - Entry point, copies the content of one file to another.
 * @argc: The number of command-line arguments (including program name).
 * @argv: An array of strings containing the command-line arguments.
 * Return: 0 on success, or an exit code on failure.
 */
int main(int argc, char *argv[])
{
	int file_ori;
	int file_des;
	int read_info;
	int write_info;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_ori file_des\n");
		exit(97);
	}

	file_ori = open(argv[1], O_RDONLY);
	if (file_ori == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_des = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_des == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((read_info = read(file_ori, buff, 1024)) > 0)
	{
		write_info = write(file_des, buff, read_info);
		if (write_info == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (read_info == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(file_ori) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_ori);
		exit(100);
	}

	if (close(file_des) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_des);
		exit(100);
	}

	return (0);
}
