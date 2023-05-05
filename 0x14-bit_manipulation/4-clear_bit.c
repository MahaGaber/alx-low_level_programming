#include"main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: integer pointer
 * @index: integer
 *Return:1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int n_bit;

	n_bit = sizeof(n) * 8;

	if (index >= n_bit)
		return (-1);

	if (*n & 1L << index)
		*n &= ~(1 << index);

	return (1);
}



