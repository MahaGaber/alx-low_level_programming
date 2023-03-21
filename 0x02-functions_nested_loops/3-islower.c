#include"main.h"
/**
 * _islower - it takes one integer argument
 *
 * @c: checks for lowercase character
 *
 *Return: on success 1.on failure 0
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
	return (1);
else
	return (0);
}
