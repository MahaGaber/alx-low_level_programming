#include"main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: integer pointer
 * @index: integer
 *Return:1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int n_bit;

	n_bit = sizeof(n) * 8;

	if (index >= n_bit)
		return (-1);

	*n |= (1 << index);
	if (*n)
		return (1);
	else
		return (-1);
}



