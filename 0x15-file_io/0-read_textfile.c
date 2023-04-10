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
int i, j, fd;
char *buf;
if (!filename)
	return (0);
fd = open(filename, O_RDONLY);
if (fd < 0)
	return (0);
buffer = malloc(sizeof(char) * letters);
if (!buffer)
	return (0);
i = read(fd, buffer, letters);
if (i < 0)
{
free(buffer);
return (0);
}
buffer[i] = '\0';
close(fd);
j = write(STDOUT_FILENO, buffer, i);
if (j < 0)
{
free(buffer);
return (0);
}
free(buffer);
return (j);
}
