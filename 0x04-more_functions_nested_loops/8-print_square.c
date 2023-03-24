#include"main.h"
/**
 * print_square - it takes two integer argument
 *@size : integer number
 *Return: print square
 */

void print_square(int size);
{
	int i, j;

if (size <= 0)
	_putchar('\n');
else
{
	for (j = 1; j <= size; j++)
	{
		for (i = 1; i <= size; i++)
	{
		_putchar('#');
	}
		_putchar('\n');
	}
}
}
