#include"main.h"
/**
 * _mem - it allocates memory with byte
 * @str: pointer character
 * @c: character
 * @number: integer
 *Return:pointer or NULL
 */

char *_mem(char *str, char c, unsigned int number)
{
	char *p = str;

	while (number--)
		*str++ = c;

	return (p);
}
/**
 * _calloc - it allocates memory using malloc
 * @size: integer
 * @nmemb: integer
 *Return:pointer or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;

if (nmemb == 0 || size == 0)
	return (NULL);

ptr = malloc(size * nmemb);
if (ptr == 0)
	return (NULL);

_mem(ptr, 0, size * nmemb);

return (ptr);
}

