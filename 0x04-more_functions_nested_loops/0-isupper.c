#include"main.h"
/**
 * _isupper - it takes two integer argument
 * @c: accept integer number
 *
 *Return: 1 on success checks for uppercase character
 */

int _isupper(int c)
{
	int j;

	for (j = 65; j <= 90; j++)
	{
		if (_putchar(c) == _putchar(j))
			return (1);
		else
			return (0);
	}
}
