#include "main.h"

/**
 * append_text_to_file - This function appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the content
 *
 * Return: 1 or -1
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nls, rewr;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

		if (fd == -1)
			return (-1);

	if (text_content)
	{
		for (nls = 0; text_content[nls]; nls++)
			;
		rewr = write(fd, text_content, nls);

		if (rewr == -1)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
