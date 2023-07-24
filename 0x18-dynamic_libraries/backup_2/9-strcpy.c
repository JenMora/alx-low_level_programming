#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcpy - copies the string pointed to by
 *
 * @dest: string
 * @src: another string
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
char *p = dest;
while (*src != '\0')
{
*p++ = *src++;
}
*p = '\0';
return (dest);
}
