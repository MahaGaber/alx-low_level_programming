#include"main.h"
/**
 * print_line - it takes two integer argument
 *@n : integer number
 *Return: print line
 */

void print_line(int n)
{
int j;

if (n <= 0)
	_putchar('\n');
else
{
	for (j = 1; j <= n; j++)
	{
		_putchar('_');
	}
		_putchar('\n');
}
}
