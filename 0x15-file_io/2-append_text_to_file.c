#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: filename
 * @text_content: The string to be added to end of file
 *
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
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
i = open(filename, O_WRONLY | O_APPEND);
j = write(i, text_content, l);
if (i == -1 || j == -1)
{
return (-1);
}
close(i);
return (1);
}
