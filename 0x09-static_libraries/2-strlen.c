#include"main.h"
/**
 * _strlen - it takes one integer argument
 * @s: accept pointer character
 *
 *Return:length of string
 */

int _strlen(char *s)
{
int counter;

for (counter = 0; *s != '\0'; s++)
	++counter;
return (counter);
}

