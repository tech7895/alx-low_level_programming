#include "main.h"

/**
 * read_textfile - This function reads a text file and
 * prints it to the POSIX standard output
 * @filename: the filename
 * @letters: the number of letters
 *
 * Return: the number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int k;
	ssize_t t, nls;
	char *buff;

	if (!filename)
	{
		return (0);
	}

	k = open(filename, O_RDONLY);

	if (k == -1)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}

	t = read(k, buff, letters);
	nls = write(STDOUT_FILENO, buff, t);

	close(k);
	free(buff);


	return (nls);
}
