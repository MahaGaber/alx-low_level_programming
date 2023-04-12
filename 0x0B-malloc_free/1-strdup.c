#include"main.h"
/**
 * _strdup - it fill memory with constant byte
 * @str: accept pointer character
 *Return:pointer character
 */

char *_strdup(char *str)
{
char *ptr;
int size = 0, i;

if (str == NULL)
	return (NULL);
while (str[size])
{
	size++;
}
ptr = malloc(size * sizeof(*str) + 1);
if (ptr == NULL)
	return (NULL);

for (i = 0; i < size; i++)
{
ptr[i] = str[i];
}

return (ptr);
}

