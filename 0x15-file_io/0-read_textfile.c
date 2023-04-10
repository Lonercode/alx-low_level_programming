#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it to the POSIX standard output.
 * @filename: Filename
 * @letters: number of letters to be read/printed
 * 
 * Return: Number of letters read/printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i;
    ssize_t j;
    ssize_t k;
	char *b;

if (filename == NULL)
{
	return (0);
}
else
{
    b = malloc(sizeof(char) * letters);
}
if (b == NULL)
{
	return (0);
}
else
{
	i = open(filename, O_RDONLY);
	j = read(i, b, letters);
	k = write(STDOUT_FILENO, b, j);
}
if (i == -1 || j == -1 || k == -1 || k != r)
{
	free(b);
	return (0);
}

free(b);
close(i);

return (k);
}
