#include"main.h"
/**
 * _sqrt_recursion - it prints returns the square root of a given number
 * @n: accept integer number
 * *Return:integer number
 */

int _sqrt_recursion(int n)
{
	return (sqrt1(n, 1));
}
/**
 * sqrt - it prints returns the square root of a given number
 * @n: accept integer number
 * @test: accept integer number
 * *Return:integer number
 */
int sqrt1(int n, int test)
{
	if (test * test == n)
		return (test);
	else if (test * test < n)
	return (sqrt1(n, test + 1));
	else
		return (-1);
}

