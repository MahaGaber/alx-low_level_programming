#include"main.h"
/**
 * _puts_recursion - it prints returns the factorial of a given number
 * @s: accept pointer character
 * *Return:
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}


