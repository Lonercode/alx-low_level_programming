#include "main.h"

char *create_buffer(char *file);
void end_file(int fd);

/**
 * create_buffer - Buffer allocation
 * @file: input
 *
 * Return: Buffer
 */
char *create_buffer(char *file)
{
char *buff;
buff = malloc(sizeof(char) * 1024);

if (buff == NULL)
{
dprintf(STDERR_FILENO,"Error: Can't write to %s\n", file);
exit(99);
}
return (buff);
}

/**
 * end_file - Close file
 * @fd: File descriptor
 */
void end_file(int fd)
{
	int q;

	q = close(f);

	if (q == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
	}
}

/**
 * main - Content copied to other file
 * @argc: input
 * @argv: input
 *
 * Return: 0 (success).
 */
int main(int argc, char *argv[])
{
	int start, end, j, k;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = create_buffer(argv[2]);
	start = open(argv[1], O_RDONLY);
	j = read(start, buff, 1024);
	end = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (start == -1 || j == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		k = write(end, buff, j);
		if (end == -1 || k == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		j = read(start, buff, 1024);
		end = open(argv[2], O_WRONLY | O_APPEND);

	} while (j > 0);

	free(buff);
	end_file(start);
	end_file(end);

	return (0);
}
