#include"main.h"
/**
 * _strspn - itgets the length of a prefix substring
 * @s: accept pointer character
 * @accept:accept pointer character
 * *Return:integer number 
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, counter;
counter = 0;

for (i = 0; s[i]; i++)
{
	for (j = 0; accept[j]; j++)
	{
if (s[i] == accept[j])
{
counter += 1;
}
	}
}

return (counter);
}


