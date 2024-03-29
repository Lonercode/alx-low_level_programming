#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: filename
 * @text_content: string to be put in file
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
int i, j, l = 0;

if (filename == NULL)
{
return (-1);
}
if (text_content != NULL)
{
for (l = 0; text_content[l];)
{
l++;
}
}

i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
j = write(i, text_content, l);

if (i == -1 || j == -1)
{
return (-1);
}
close(i);
return (1);
}
