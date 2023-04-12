#include"main.h"
/**
 * alloc_grid - it 2 dimensional array of integers
 * @width: integer number
 * @height: integer number
 *Return:pointer character
 */

int **alloc_grid(int width, int height)
{
int *ptr;
int i, j;

if (width <= 0 || height <= 0)
return (NULL);

ptr = malloc(height * width * sizeof(int));
if (ptr == NULL)
return (NULL);

for (i = 0; i < width; i++)
{
	for (j = 0; j < height; j++)
		*(ptr + i * height + j) = 0;
}
return (*ptr);
}

