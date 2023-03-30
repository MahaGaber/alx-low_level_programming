#include"main.h"
/**
 * _strcat - it takes one integer argument
 * @dest: accept pointer character
 * @src:accept pointer character
 *Return:pointer character
 */

char *_strcat(char *dest, char *src)
{
int counter = 0, i;

while (dest[counter])
	counter++;

for (i = 0; src[i]; i++)
dest[counter + i] = src[i];

return (dest);
}

