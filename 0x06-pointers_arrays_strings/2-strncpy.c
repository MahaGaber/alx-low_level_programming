#include"main.h"
/**
 * _strncpy - it takes one integer argument
 * @dest: accept pointer character
 * @src:accept pointer character
 * @n:number of bytes
 *Return:pointer character
 */

char *_strncpy(char *dest, char *src, int n)
{
int  i;


for (i = 0; src[i] != '\0' && i < n; i++)
dest[i] = src[i];

while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);
}

