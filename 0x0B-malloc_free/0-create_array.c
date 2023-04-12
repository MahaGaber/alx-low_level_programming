#include"main.h"
/**
 * create_array - it fill memory with constant byte
 * @size: integer number
 * @c: accept pointer character
 *Return:pointer character
 */

char *create_array(unsigned int size, char c)
{
char *ptr;

if (size == 0)
	return (NULL);

ptr = malloc(size * sizeof(*c));
if (ptr == NULL)
	return (NULL);

while (size--)
{
	ptr[size] = c;
}

return (ptr);
}

