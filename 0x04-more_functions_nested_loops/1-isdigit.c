#include"main.h"
/**
 * _isdigit - it takes two integer argument
 * @c: accept integer number
 *
 *Return: 1 on success checks for digit number
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
