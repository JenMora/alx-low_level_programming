#include "main.h"
#include <stdio.h>

/**
 *  * _strstr - a function that locates a substring
 *   * @haystack: the string to be searched
 *    * @needle: the srtring to be searched
 *     * Return:  a pointer to the beginning of the located substring,
 *      * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
int a;

if (*needle == 0)
{
return (haystack);
}
while (haystack)
{
a = 0;
if (haystack[a] == needle[a])
{
do {
if (needle[a + 1] == '\0')
return (haystack);
a++;
}
while (haystack[a] == needle[a])
}
haystack++;

}
return ('\0');
}
