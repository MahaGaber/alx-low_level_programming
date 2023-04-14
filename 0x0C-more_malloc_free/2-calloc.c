#include"main.h"
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

for (i = 0; i < nmemb; i++)
	ptr[i] = 0;

return (ptr);
}

