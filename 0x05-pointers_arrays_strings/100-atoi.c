#include "main.h"
#include <stdio.h>
#include <string.h>
#include <limits.h>
/**
 *_atoi - convert a string to an integer.
 * @s: the string
 *Return:The integer value represented by the string. If the string contains no
 *digits, the function returns 0. If the value is too large to be
 *represented by an int, the function returns INT_MAX or INT_MIN,
 *depending on the sign of the input.
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;
int digit = 0;
int started = 0;
while (*s == ' ')
{
s++;
}
if (*s == '-')
{
sign = -1;
s++;
started = 1;
}
else if (*s == '+')
{
s++;
started = 1;
}
while (*s != '\0')
{
if (*s >= '0' && *s <= '9')
started = 1;
digit = *s - '0';
}
if (result > (INT_MAX - digit) / 10)
{
return (sign == 1 ? INT_MIN : INT_MAX);
}
result = result * 10 + digit;
s++;
}
if (started)
{
return (sign *result);
}
else
{
return (0);
}
}
