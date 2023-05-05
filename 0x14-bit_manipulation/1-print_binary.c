#include"main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: integer
 *Return:
 */

void print_binary(unsigned long int n)
{
	int n_bit, binary_n = 0;

	n_bit = sizeof(n) * 8;

	while (n_bit)
	{
		if (n & 1 << --n_bit)
		{
			_putchar('1');
			binary_n++;
		}
		else if (binary_n)
		{
			_putchar('0');
		}
	}

if (binary_n == 0)
{
	_putchar('0');
}

}



