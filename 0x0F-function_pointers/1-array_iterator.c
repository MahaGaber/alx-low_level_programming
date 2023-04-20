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
	int arr_end;

	if (array && size && action)
	{
		arr_end = array + size;
		while (array < ar_end)
			action(*array++);
	}
}

