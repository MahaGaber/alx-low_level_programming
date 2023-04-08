#include"main.h"
/**
 * _memcpy - it fill memory with constant byte
 * @dest: accept pointer character
 * @src:accept character
 * @n:accept int number
 * *Return:pointer character
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}

return (dest);
}

