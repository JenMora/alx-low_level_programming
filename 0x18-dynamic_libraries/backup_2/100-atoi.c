
#include "main.h"
#include <stdio.h>
#include <string.h>
#include <limits.h>
/**
 *  *_atoi - convert a string to an integer.
 *   * @s: the string
 *    *Return:The integer value represented by the string. If the string contains no
 *     *digits, the function returns 0. If the value is too large to be
 *      *represented by an int, the function returns INT_MAX or INT_MIN,
 *       *depending on the sign of the input.
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;

if (*s == '-')
{
sign = -1;
s++;
}

while (*s)
{
if (*s >= '0' && *s <= '9')
{
result = result * 10 + (*s - '0');
}
else
{             
break;
}
s++;
}
return result * sign;                                     
}
