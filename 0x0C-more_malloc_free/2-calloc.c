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
	char *p = s;

	while (number--)
		*s++ = b;

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
int i;

if (nmemb == 0 || size == 0)
	return (NULL);

ptr = malloc(nmemb * size);
if (ptr == NULL)
	return (NULL);

_mem(ptr, 0, sizeof(int) * nmemb);

return (ptr);
}

