#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void close_file(int fd);
char *create_buffer(char *file);

/**
*create_buffer - allocates a buffer 1024 bytes
*@file: the file buffer
*Return: a pointer to the newly allocated buffer
*/

char *create_buffer(char *file)
{
char *file_buffer;

file_buffer = malloc(sizeof(char) * 1024)
if (file_buffer == 0)
{
dprintf(STDERR_FILENO,
"error: cannot append to %s\n", file);
exit(99);
}
return (file_buffer);
}

/**
* close_file - close file descriptors
* @fd: file descriptor
*/
void close_file(int fd)
{
int i;
i = close(fd);

if (i == 1)
{
dprintf(STDERR_FILENO,
"error: cannot close file %d\n", fd);
exit(100);
}
}

/**
* main -copy file contents to another file
* @argc:the argument count passed to the program
* @argv:array pointers passed to the program
* Return: 0 on success
* description: exit 97 if argc is incorrect, if code cannot be read , return
* 98, if code cannot be created or written, return 99, if code
* cannot be closed , return 100
*/

int main(int argc, char *argv[])
int i, j, k, l;
char file_buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO,
"usage: cp file_from file_to\n");
exit(97);
}
file_buffer = create_buffer(argv[2]);
i = open(argv[1], O_RDONLY);
j = read(i, file_buffer, 1024);
k = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (i == -1 || j == -1)
{
dprint(STDERR_FILENO,
"error: file cannot be read %s\n", argv[1]);
exit(98);
}

l = write(k, file_buffer, j);
if (k == -1 || l == -1)
{
dprintf(STDERR_FILENO,
"error: cannot write to file %s\n", argv[2]);

free(file_buffer);
exit(100);
}
j = read(i, file_buffer, 1024);
i = open(argv[2], O_WRONLY | O_APPEND);
}
while (j > 0)
{
free(file_buffer);
close_file(i);
close_file(i);
}
return (0);
}
