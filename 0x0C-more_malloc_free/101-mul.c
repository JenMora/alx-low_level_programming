#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * is_digit - a function that checks if a string contains a non-digit char
 * @s: string to be evaluated
 * Return: 0 if a non-digit is found,otherwise 1
 */
int is_digit(char *s)
{
int a = 0;

while (s[a])
{
if (s[a] < '0' || s[a] > '9')
return (0);
a++;
}
return (1);
}
/**
 *_strlen - returns the length of a string
 *@s: string to evaluated
 *Return: the length of the string
 */
int _strlen(char *s)
{
int b = 0;

while (s[b] != '\0')
{
b++;
}
return (b);
}

/**
 *main - entry point handling errors for main
 *@errors: errors to be checked
 *Return: 0
 */
void errors(void)
{
printf("Error\n");
exit(98);
}

 /**
  *main - multiplies two positive numbers
  *@argc: number of arguments
  *@argv: array of arguments
  *Return: always 0 (Success)
  */
int main(int argc, char *argv[])
{
char *s1, *s2;
int length1, length2, length, n, carry, digit1, digit2, *result, a = 0;

s1 = argv[1], s2 = argv[2];
if (argc != 3 || !is_digit(s1) || !is_digit(s2))
errors();
length1 = _strlen(s1);
length2 = _strlen(s2);
length = length1 + length2 + 1;
result = malloc(sizeof(int) * length);
if (result == NULL)
return (1);
for (n = 0; n <= length1 + length2; n++)
result[a] = 0;
for (length1 = length1 - 1; length1 >= 0; length1--)
{
digit1 = s1[length1] - '0';
carry = 0;
for (length2 = _strlen(s2) - 1; length2 >= 0; length2--)
{
digit2 = s2[length2] - '0';
carry += result[length1 + length2 + 1] + (digit1  *digit2);
result[length1 + length2 + 1] = carry % 10;
carry /= 10;
}
if (carry > 0)
result[length1 + length2 + 1] += carry;
}
for (a = 0; a < length - 1; a++)
if (result[a])
a = 1;
if (a)
putchar(result[a] + '0');

if (!a)
putchar('0');
putchar('\n');
free(result);
return (0);
}
