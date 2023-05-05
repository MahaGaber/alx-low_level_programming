#include"main.h"

/**
 * flip_bits -  returns the number of bits to flip
 *@n:integer
 *@m:integer
 *Return:0 or 1
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR = n ^ m;
	unsigned int counter = 0;

	while (XOR)
	{
		XOR = XOR & (XOR - 1);
		counter++;
	}

	return (counter);
}



