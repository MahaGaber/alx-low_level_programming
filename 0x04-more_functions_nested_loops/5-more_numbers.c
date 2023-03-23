#include"main.h"
/**
 * print_most_numbers - it takes two integer argument
 *
 *Return: print numbers 0 .. 9
 */

void print_most_numbers(void)
{
	int i, j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 9; i++)
	{
		if (i <= 9)
		{
		_putchar(i + 48);
		}
		else
		{
		_putchar((i / 10) + 48);
		_putchar((i % 10) + 48);
		}
	}
	_putchar('\n');
	}
}
