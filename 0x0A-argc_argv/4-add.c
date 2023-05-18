#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point of the program
 *Description:  that adds positive numbers
 *Return:0
 */

int add_numbers( char *str)
{
/*declaring variables*/
int count;

count = 0;

while (count < strlen(str))
/*count string*/		
{
if (!isdigit(str[count]))
{
return (0);
}
count++;
}
return (1);
}
/**
 * main - entry point
 * @argc: argument count
 * @argv: array argument
 * Return:0
 */
int main(int argc, char *argv[])
{
/*declare variable*/
int count;
int str;
int sum = 0
count = 1;

while (count < argc)
{
if (add_number(argv[count])
sum += str
}
else
{
printf("Error\n");
return (1);
}
count++;
}
printf("%d\n",sum);
return (0);
}
