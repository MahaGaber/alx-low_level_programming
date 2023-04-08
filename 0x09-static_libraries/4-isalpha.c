#include"main.h"
/**
 * _isalpha - it takes one integer argument
 * @c: checks for lowercase or uppercase character
 *
 *
 *Return: on success 1.on failure 0
 */
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
	return (1);
else if (c >= 65 && c <= 90)
	return (1);
else
	return (0);
}

