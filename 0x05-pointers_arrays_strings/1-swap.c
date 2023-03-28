#include"main.h"
/**
 * swap_int - it takes two integer argument
 * @a: accept integer number
 *@b:  accept integer number
 *Return:swap between two numbers
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

