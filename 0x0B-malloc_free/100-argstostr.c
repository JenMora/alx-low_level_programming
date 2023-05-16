#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *argstostr- a function that concatenates all the arguments of your program
 *@ac: integer input
 *@av: double pointer array of strings
 *Return: 0
 */
char *argstostr(int ac, char **av)

{
	int a, b, r = 0, l = 0;
	char *str;

/* declare the local vaiables for loop counting*/
	if (ac == 0 || av == NULL)
		return (NULL);
/*if the integer iput is 0 and the array as well, return Null*/
	for (a = 0; a < ac; a++)
/*iterate a if it is equal to 0 and less than the integer input*/
	{
		for (b = 0; av[a][b]; b++)
			l++;
/*l++ keeps the length of the concatenated string*/
/*iterate b if it is equal to 0 and less than the integer input*/
	}
	l += ac;
/* declare the current index of the integer input*/
	str = malloc(sizeof(char) * l + 1);
/*allocate the memory of the current index to store the concatenated string*/
	if (str == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
/*iterate to calculate the total length of the concatenated string*/
	{
		for (b = 0; av[a][b]; b++)
/*iterate to calculate the total length of the concatenated string*/
		{
			str[r] = av[a][b];
			r++;
/*r++ is used in this case to keep track of the position of the string*/
/*where concatenation will take place*/
		}
		if (str[r] == '\0')
/*if the string array posituion is equal to the last index, return str*/
		{
			str[r++] = '\n';
/*iterate r till '\0' then '\n'*/
		}
	}
	return (str);
}
