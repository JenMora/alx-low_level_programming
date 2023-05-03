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
int digit;
while (*s == ' ')
{
s++;
}
if (*s == '-')
{
sign = -1;
s++;
}
else if (*s == '+')
{
s++;
}
while (*s >= '0' && *s <= '9')
{
digit = *s - '0';
if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10))
{
return (sign == 1 ? INT_MAX : INT_MIN);
}
result = result * 10 + digit;
s++;
}
return (sign *result);
}
