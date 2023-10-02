#include "main.h"

/**
 * create_file - This function  creates a file based on conditions
 *
 * @filename: the file name
 * @text_content: the content to be copied
 *
 * Return: 1 if suceesful otherwise -1
 *
 */
int create_file(const char *filename, char *text_content)
{
	int k, nls, rw;

	if (!filename)
	{
		return (-1);
	}

	k = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (k == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (nls = 0; text_content[nls]; nls++)
		;
	rw = write(k, text_content, nls);

	if (rw == -1)
		return (-1);
	close(k);

	return (1);
	}
