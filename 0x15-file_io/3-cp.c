#include "main.h"

/**
 * error_file - This function copies the content
 * of a file to another file
 * @file_from: the initial file
 * @file_to: the file to copy to
 * @argv: the argument vector
 *
 * Return: void
 *
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);

		exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - This function copies the content of a file from one to another
 * @argc: number of arguments
 * @argv: the argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t cs, cwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);
	cs = 1024;
	while (cs == 1024)
	{
		cs = read(file_from, buf, 1024);
		if (cs == -1)
		{
			error_file(-1, 0, argv);
		}
		cwr = write(file_to, buf, cs);
			if (cwr == -1)
			{
				error_file(0, -1, argv);
			}
	}
	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
