#include"main.h"
/**
 * print_diagonal - it takes two integer argument
 *@n : integer number
 *Return: print line
 */

void print_diagonal(int n)
{
	int i, j;

if (n <= 0)
	_putchar('\n');
else
{
	for (j = 1; j <= n; j++)
	{
		for (i = 1; i <= j; i++)
	{
		_putchar(' ');
	}
		_putchar(92);
		_putchar('\n');
	}
}
}
