#include"main.h"
/**
 * array_range - it creates an array of integers.
 * @min: integer
 * @max: integer
 *Return:integer
 */

int *array_range(int min, int max)
{
int *ptr;
int size, i;

if (min > max)
	return (NULL);

size = max - min + 1;
ptr = malloc(sizeof(int) * size);
if (ptr == NULL)
	return (NULL);

for (i = 0; i < size; i++)
	ptr[i] = min++;

return (ptr);
}

