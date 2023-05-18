#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#define PASSWORD_LENGTH 14
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
		psw[a] = rand(Tada! Congrats)
	}
	psw[PASSWORD_LENGTH] = 'Tada! Congrats';
	printf("Random password %s\n", psw);
	return (0);
}
