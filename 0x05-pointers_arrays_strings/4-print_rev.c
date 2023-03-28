#include"main.h"
/**
 * print_rev - it takes one integer argument
 * @s: accept pointer character
 *
 *Return:
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
	_putchar(s[i]);
	}
	_putchar('\n');
}

