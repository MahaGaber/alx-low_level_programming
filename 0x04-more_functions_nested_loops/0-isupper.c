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

	for (j = 'A'; j <= 'Z'; j++)
	{
		if (j == c)
			return (1);
		else
			return (0);
	}
}
