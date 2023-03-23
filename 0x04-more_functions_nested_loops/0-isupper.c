#include"main.h"
/**
 * _isupper - it takes two integer argument
 * @c: accept integer number
 *
 *Return: 1 on success checks for uppercase character
 */

int _isupper(int c)
{
	if (c >= 65 && c >= 90)
		return (1);
	else
		return (0);
}
