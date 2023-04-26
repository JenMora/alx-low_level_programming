#include "main.h"
/**
*positive_or_negative - determine if a number is positive or negative
*
*@i:the number to be determined
*Return: 0 (success)
*/
void positive_or_negative(int i)
{
if (i < 0)
{
printf("%d is %s\n", i, "negative");
}
else if (i > 0)
{
printf("%d is %s\n", i, "positive");
}
else
{
printf("%d is %s\n", i, "zero");
}
return;
}

