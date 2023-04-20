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
	int *e = array + size - 1;

	if (array && size && action)
	{
		while (array <= e)
			action(*array++);
	}
}

