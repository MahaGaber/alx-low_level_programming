#include"main.h"
/**
 * _strcmp - it takes one integer argument
 * @s1: accept pointer character
 * @s2:accept pointer character
 *Return: 1 on sucess
 */

int _strcmp(char *s1, char *s2)
{
int counter = 0, i;


for (i = 0; s1[i] != '\0'; i++)
{
	if (s1[i] != s2[i])
	{
	counter = ((int) s1[i] - 48) - ((int) s2[i] - 48);
	break;
	}
}

return (counter);
}

