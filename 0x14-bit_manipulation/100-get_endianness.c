#include"main.h"

/**
 * get_endianness - return endianness of the system
 *
 *Return:0 or 1
 */

int get_endianness(void)
{
	unsigned long int end = 1;

	return (*(char *)&end);
}



