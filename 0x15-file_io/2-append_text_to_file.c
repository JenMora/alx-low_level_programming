#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename:is the name of the file
 * @text_content:is the NULL terminated string to add at the end of the file
 * Return: 1 on success, otherwise -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0;
	int j = 0;
	int length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	j = write(i, text_content, length);

	if (i == -1 || j == -1)
	{
		return (-1);
		close(i);
	}
	return (1);
}
