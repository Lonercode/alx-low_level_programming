#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void end_file(int f);
char *create_buffer(char *file);


/**
 * main - file content copied to other file
 * @argc: input
 * @argv: input
 *
 * Return: 0 (success)
 *
 * Description: Exit code 97 - Incorrect Argument
 *              Exit code 98 - Start file cannot be read / does not exist
 *              Exit code 99 - End file (Destination file) - Cnnot be read/ does not exist
 *              Exit code 100 - Either file cannot be closed
 */
int main(int argc, char *argv[])
{
int start, end, i, j;
char *buff;

if (argc != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

buff = create_buffer(argv[2]);
start = open(argv[1], O_RDONLY);
i = read(start, buff, 1024);
end = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (start == -1 || i == -1)
{
	dprintf(STDERR_FILENO,
		"Error: Can't read from file %s\n", argv[1]);
	free(buff);
	exit(98);
}

w = write(end, buff, i);
if (start == -1 || j == -1)
{
	dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", argv[2]);
	free(buff);
	exit(99);
}

i = read(start, buff, 1024);
end = open(argv[2], O_WRONLY | O_APPEND);

} while (i > 0);

free(buff);
end_file(start);
end_file(end);

return (0);
}

/**
 * create_buffer - 1024 bytes; buffer allocation
 * @file: input / filename
 *
 * Return: Buffer (Newly allocated)
 */
char *create_buffer(char *file)
{
char *buff;

buff = malloc(sizeof(char) * 1024);

if (buff == NULL)
{
	dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", file);
	exit(99);
}

return (buff);
}

/**
 * close_file - Closes files
 * @f: Descriptor singled out for closing
 */
void end_file(int f)
{
int k;

k = close(f);

if (k == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close f %d\n", f);
	exit(100);
}
}


