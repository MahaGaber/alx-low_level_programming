#include"main.h"
/**
 * _strncat - it takes one integer argument
 * @dest: accept pointer character
 * @src:accept pointer character
 * @n:number of bytes
 *Return:pointer character
 */

char *_strncat(char *dest, char *src, int n)
{
int counter = 0, i;

while (dest[counter])
	counter++;

for (i = 0; src[i] != '\0' && i < n; i++)
dest[counter + i] = src[i];

dest[counter + i] = '\0';

return (dest);
}

