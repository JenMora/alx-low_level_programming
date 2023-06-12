#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename:the pointer to the file to be created
 * @text_content:a Null pointer to the string where the file is to be created
 * Return:1 on sucess, otehrwise -1
 */

int create_file(const char *filename, char *text_content)
{
	int i = 0;
	int j = 0;
	int length = 0;

	if (filename == 0)
	{
		return (-1);
	}
	if (text_content != 0)
	{
		while (text_content[length])
			length++;
	}

	i = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	j = write(i, text_content, length);

	if (i == -1 || j == -1)
	{
	close(i);
	}
	return (1);
}
