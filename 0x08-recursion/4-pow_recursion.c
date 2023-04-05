#include"main.h"
/**
 * _pow_recursion - it prints returns the factorial of a given number
 * @x: accept integer number
 * @y: accept integer number
 * *Return:integer number
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else if (y < 0)
		return (-1);

	return (x * _pow_recursion(y - 1));
}


