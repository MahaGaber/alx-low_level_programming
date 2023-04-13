#include"main.h"
/**
 * malloc_checked - it allocates memory using malloc
 * @b: integer
 *Return:pointer or NULL
 */

void *malloc_checked(unsigned int b)
{
char *ptr;

ptr = malloc(sizeof(char) * b);
if (ptr == NULL)
	exit(98);

return (ptr);
}

