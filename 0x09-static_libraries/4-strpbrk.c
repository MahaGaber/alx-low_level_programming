#include"main.h"
/**
 * _strpbrk - itgets the length of a prefix substring
 * @s: accept pointer character
 * @accept:accept pointer character
 * *Return:integer number
 */

char *_strpbrk(char *s, char *accept)
{
int i, j;
char *ptr;

for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (accept[j] == s[i])
	{
		ptr = &s[i];
		return (ptr);
	}
	}
}

return ('\0');
}


