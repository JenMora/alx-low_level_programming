#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#define PASSWORD_LENGTH 20
/**
 *crackme - creates a random password
 *Return :0
 */
int main(void)
{
	char psw[PASSWORD_LENGTH + 1];
	
	int a;
	srand(time(NULL));
	for (a = 0; a <PASSWORD_LENGTH; a++)
	{
		psw[a] = rand() % 22 + 44;
	}
	psw[PASSWORD_LENGTH] = '\0';
	printf("Random password %s\n", psw);
	return (0);
}
