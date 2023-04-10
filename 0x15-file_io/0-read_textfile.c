#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function that reads a file and prints it to POSIX Standard Output
 * @filename: input
 * @letters: input
 *
 * Return: 0 or number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i, j, k;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	i = open(filename, O_RDONLY);
	j = read(i, buff, letters);
	k = write(STDOUT_FILENO, buff, j);

	if (i == -1 || j == -1 || k == -1 || k != j)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(i);

	return (k);
}
