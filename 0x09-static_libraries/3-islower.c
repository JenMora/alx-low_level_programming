#include "main.h"
/**
 *_islower - checks for lowercase character for int c
 *@c: The character to be checked
 * Return:1 (success) otherwise 0
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
