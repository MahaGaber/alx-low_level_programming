#include"function_pointers.h"
/**
 * array_iterator - it prints a name.
 * @array: pointer of integer
 * @size:array size
 * @action: function pointer
 *Return:void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && size && action)
	{
		while (i < size)
			action(*array + i);
	}
}

