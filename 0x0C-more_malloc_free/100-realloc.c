#include"main.h"
/**
 * _realloc - it allocates memory using malloc
 * @ptr: pointer
 * @old_size: integer
 * @new_size: integer
 *Return:pointer or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *s;
unsigned int i;

if (new_size == old_size)
	return (ptr);

if (new_size == 0 && ptr != NULL)
{
	free(ptr);
	return (NULL);
}

if (ptr == NULL)
{
	s = malloc(new_size);
	if (s == NULL)
		return (NULL);
	return (s);
}
if (new_size > old_size)
{
	s = malloc(new_size);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
		*((char *)s + i) = *((char *)ptr + i);

free(ptr);
}

return (s);
}

