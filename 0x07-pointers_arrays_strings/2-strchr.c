#include"main.h"
/**
 * _strchr - it fill memory with constant byte
 * @s: accept pointer character
 * @c:accept character
 * *Return:pointer character
 */

char *_strchr(char *s, char c)
{
unsigned int i;

for (i = 0; s[i]; i++)
{
if (s[i] == c)
{
	return (s + i);
}
}

return ('\0');
}


