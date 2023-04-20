#include"function_pointers.h"
/**
 * int_index - it prints a name.
 * @array: pointer of integer
 * @size:array size
 * @cmp: function pointer
 *Return:integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
		i++;
		}
	}
	return (-1);
}

