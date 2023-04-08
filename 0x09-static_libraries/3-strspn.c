#include"main.h"
/**
 * _strspn - itgets the length of a prefix substring
 * @s: accept pointer character
 * @accept:accept pointer character
 * *Return:integer number 
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; accept[j] != s[i]; j++)
	{
	if (accept[j] == '\0')
	return (i);
	}
}

return (i);
}


