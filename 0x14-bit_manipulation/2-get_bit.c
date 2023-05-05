#include"main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: integer
 * @index: integer
 *Return:integer
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int n_bit;

	n_bit = sizeof(n) * 8;

	if (index == n_bit)
		return (-1);

	return (n >> index & 1);
}



