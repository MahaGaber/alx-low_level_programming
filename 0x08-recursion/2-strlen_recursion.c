#include"main.h"
/**
 * _strlen_recursion - it prints string length
 * @s: accept pointer character
 * *Return:integer number
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s > '\0')
	len +=	_strlen_recursion(s + 1) + 1;

	return (len);
}


