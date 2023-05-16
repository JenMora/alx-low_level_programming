#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 *count_word - a helper for a function that splits a string into words
 *@s: string to split
 *Return: number of words
 */
int count_word(char *s)
{
int flag, c, w;
/*declare the variables and Flag to keep track of space characters*/
/* c is for loop counter*/
flag = 0;
w = 0;

/*for word count*/
for (c = 0; s[c] != '\0'; c++)
/*for loop iteration over each character*/
{
if (s[c] == ' ')
/* if a space is encountered during the iteration, set flag to 0*/
flag = 0;
else if (flag == 0)
/*if a non space character is encountered, return teh current word count*/
{
return (w);
}

/**
*strtow - splits a string into words
*@str: string to split
*Return: pointer to an array of strings (Success)
*otherwise NULL
*/
char **strtow(char *str)
{
char **matrix, *tmp;
int i, k = 0, len = 0, words, c = 0, start, end;
/*more lines are necessary for this code*/

while (*(str + len))
/*Calculate the length of the input string*/
len++;
words = count_word(str);
/*Get the number of words in the string*/
if (words == 0)
/*If there are no words in the string*/
return (NULL);
matrix = (char **) malloc(sizeof(char *) * (words + 1));
/*allocate memory to store the split string*/
if (matrix == NULL)
/*check whether memory allocation failed*/
return (NULL);
for (i = 0; i <= len; i++)
/*iterate over each character*/
{
if (str[i] == ' ' || str[i] == '\0')
/*if a null or space chacter is encounter end teh iteration*/
{
if (c)
/*if a non-zero character count is encountered end the iteration*/
{
end = i;
tmp = (char *) malloc(sizeof(char) * (c + 1));
/*allocate memory for the current for the word*/
if (tmp == NULL)return (NULL)
/*check wether there is a fail in mem allocation*/
while (start < end)
/*copy the word characters*/
*tmp++ = str[start++];
*tmp = '\0';
/*set a null terminator*/
matrix[k] = tmp - c;
/*set the matrix pounter to teh beginning of the word*/
k++;
/*increment teh word count*/
c = 0;
/*reset the character count for the next word*/
/*more lines of code*/
}
}
else if (c++ == 0)
/*once a nonspace character is encountered, */
start = i;
/*mark the start position of a new word*/
}
matrix[k] = NULL;
/*set the last name of the word*/
return (matrix);
/* return the array of strings*/
}
