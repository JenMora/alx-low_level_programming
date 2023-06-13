#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 *create_buffer - Allocate 1024 bytes for a buffer.
 *@file: The name of the file buffer is storing chars for.
 *Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *file_buffer;

	file_buffer = malloc(sizeof(char) * 1024);

	if (file_buffer == NULL)
	{
		dprintf(STDERR_FILENO, "error: Cannot write to string %s\n", file);
		exit(99);
	}

	return (file_buffer);
}

/**
 *close_file - Closes file descriptors.
 *@fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int cl;

	cl = close(fd);


	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "error: Cannot close file fd %d\n", fd);
		exit(100);
	}
}

/**
 *main - Copies the contents of a file to another file.
 *@argc: The number of arguments supplied to the program.
 *@argv: An array of pointers to the arguments.
 *Return: 0 on success.
 *Description: If the argument count is incorrect - exit code 97, if the file
 *cannot be read exit code 98, if the file cannot be created exit code 99,
 *if the file cannot be closed exit code 100.
 */
int main(int argc, char *argv[])
{
	int i, j, r, w;
	char *file_buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_buffer = create_buffer(argv[2]);
	i = open(argv[1], O_RDONLY);
	r = read(i, file_buffer, 1024);
	j = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (i == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "error: Cannot read from file %s", argv[1]);
			free(file_buffer);
			exit(98);
		}

		w = write(j, file_buffer, r);
		if (j == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "error: Cannot write to string %s", argv[2]);
			free(file_buffer);
			exit(99);
		}

		r = read(i, file_buffer, 1024);
		j = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(file_buffer);
	close_file(i);
	close_file(j);
	return (0);
}
