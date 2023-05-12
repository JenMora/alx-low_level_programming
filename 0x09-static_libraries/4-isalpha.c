#include "main.h"
/**
 *_isalpha - checks for lowercase or uppercase character for int c
 *@c: The character to be checked
 * Return:1 (success) otherwise 0
 */
int _isalpha(int c)
{

if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
return (0);
}
