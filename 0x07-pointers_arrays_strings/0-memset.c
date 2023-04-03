#include"main.h"
/**
 * _memset - it fill memory with constant byte
 * @s: accept pointer character
 * @b:accept character
 * @n:accept int number
 * *Return:pointer character
 */

char *_memset(char *s, char b, unsigned int n)
{
int i;

for (i = 0; i <= n; i++)
s[i] = b;

return (s);
}

