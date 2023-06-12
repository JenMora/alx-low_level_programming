#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints
 * it to the POSIX standard output
 * @filename: the filename to be opened or read
 * @letters:the number of letters it should read and print
 * Return:the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o;
	ssize_t r;
	ssize_t w;
	char *letter_file;
	if (filename == 0)
	{
	return (0);
	}
	letter_file = malloc(sizeof(char) * letters);
	if (letter_file == 0)
	{
		return (0);
	}
	o = open(filename, O_RDONLY);
	r = read(0, letter_file, letters);
	w = write(STDOUT_FILENO, letter_file, r);

	if (o == -1 || w == -1 || r == -1 || w != r)
	{
		free(letter_file);
		return (0);
	}
	free(letter_file);
	close(o);
	return (w);
}
